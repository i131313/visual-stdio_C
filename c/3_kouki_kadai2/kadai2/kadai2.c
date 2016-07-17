 #include<stdio.h>
 #define M 99999 //�@�ł��傫�Ȑ�
 #define N 8 //�m�[�h�̑���

 /* �v�����g�̖����O���t[�s��Ƃ���0�Ԗڂ̗v�f�͎g�p���Ȃ����Ƃɂ���] */
 //�אڂ��Ă��Ȃ��v�f�ɂ͒萔M �����Ă���
 //�אڂ���v�f�ɂ͏d�݂����Ă���
 //�������g��1
 int m[N+1][N+1] = { {0, 0, 0, 0, 0, 0, 0, 0, 0},
					 {0, 1, 3, 4, 1, M, M, M, M},
					 {0, 3, 1, M, 2, M, M, M, M},
					 {0, 4, M, 1, M, 5, 3, M, M},
					 {0, 1, 2, M, 1, M, 2, M, M},
					 {0, M, M, 5, M, 1, 1, 6, 10},
					 {0, M, M, 3, 2, 1, 1, M, M},
					 {0, M, M, M, M, 6, M, 1, M},
					 {0, M, M, M, M, 10, M, M, 1}};

 int main(void)
 {
	/* �m�[�h�m��t���O0 = ���m��, 1 = �m��*/
	int v[N+1];

	int x[N+1];

	 /* �m�[�h�܂ł̋���*/
	 int dist[N+1];
	 int i, j, point, start,finish, min;
	 printf("�n�_�ƏI�_����͂��āC�ŒZ�����ƍŒZ�o�H�����߂܂�\n\n");
	 printf("�T������O���t�̗אڍs��\��\n");
	 for(i=0; i<=N; i++)
	 {
		for(j = 0; j<=N;j++)
		{
			printf("%d\t",m[i][j]);
		}
		printf("\n");
 	 }
	 printf("\n\n");

	 printf("�n�_�́H");
	 scanf("%d", &start);
	 printf("�I�_�́H");
	 scanf("%d",&finish);
	 printf("\n");

	 /* �m��t���O�C�����z�������������*/
	 for( i = 1; i <= N; i++ )
	 {
		 v[i] = 0; // ���m��ŏ�����
		 dist[i] = M; // �ł��傫���l�ŏ�����
	}

	 dist[start] = 0; //�n�_����n�_�ւ̋�����0

	 for( i = 1; i <= finish; i++ )
	 {
		 /* �ŏ��̃m�[�h��T��*/
		 min = M;
		 for( j = 1; j <= N; j++ )
		 {
			 if( v[j] == 0 && dist[j] < min )
			 {
				point = j;
				 min = dist[j];
			 }
		 }
		 v[point] = 1; //�ŏ��̃m�[�h���m��
		 /* point ���o�R����j �Ɏ��钷��������܂ł̍ŒZ������菬������΍X�V*/
		 for( j = 1; j <= N; j++ )
		 {
			 if( (dist[point] + m[point][j]) < dist[j] )
			 {
				dist[j] = dist[point] + m[point][j];
				x[j] = point;
			 }
		  }
		 /* �ŒZ�����̏o��*/
		 printf("%d  ->  %d  �܂ł̍ŒZ������  %d  ", start, i, dist[i] );
		 if(i != start)
		 {
		   printf("���O�̃m�[�h�� %d\n",x[i]);
		 }
		 else printf("\n");  
	   }

	 printf("\n�I�_�̃m�[�h���璼�O�̃m�[�h�����ɑk���Ă����ƍŒZ�o�H���킩��\n\n");
	 return 0;
	}