#include<stdio.h>
#include<conio.h>

#define N 8
 
 /* �m�[�h�K��t���O0 = ���K��, 1 = �K��ς�*/
 int v[N+1];

 /* �L���[�֌W*/
 int queue[100]; // �L���[�{��
 int head = 0; // �擪�f�[�^�̃C���f�b�N�X
 int tail = 0; // �I�[�f�[�^�̃C���f�b�N�X

 void depth(int, int a[][N+1]);
 void breadth(int[][N+1]);

int main(void)
{
	char houhou;
	int i,j;
	int a[N+1][N+1];
   
	printf("�O���t��אڍs��\���œ��͂��Ă�������\n(i�~j�s�� ��(i,j)�����݂����1,�����łȂ����0�j\n");
	printf("�m�[�h��8�ł�\n\n");
	printf("��1�s�ڂ�1��ڂ́u0�v�����łɓ��͂���Ă��܂�");
	//do{
	for(i = 0; i <= N; i++) 
	{
		a[0][i] = 0;
		a[i][0] = 0;
	}
	
	
    for(i=1;i<=N;i++){
	 modoru:   printf("\n\n%d�ڂ̃m�[�h�ɂ��ē��͂��Ă�������\n",i);
    for(j=1;j<=N;j++){
        a[i][j] = getche();
	    if(a[i][j] == 48) a[i][j] = 0;
	    else if(a[i][j] == 49) a[i][j] = 1;
	    else 
	    {
		 printf("���͂��Ȃ����Ă�������"); goto modoru;
	    }
	}
	}
	
	//}while(i<N);
	printf("\n\n�T������O���t�̗אڍs��\��\n");
	for(i=0; i<=N; i++)
	{
		for(j = 0; j<=N;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");

	printf("�T�����@��I�����Ă�������(�[��:d, ��:b):");
	scanf(" %c",&houhou);

	switch(houhou)
	{
		case 'd':
			{
				int i,start;
				printf("�ǂ̃m�[�h����T�����܂����H:");
				scanf("%d",&start);
				/* �K��t���O������������ */
				for(i = 1; i <= N; i++)
		     	    v[i] = 0;

				depth( start , a); // �o���_���m�[�h 1�Ƃ��ĒT���J�n
			}
			break;

		case 'b':
			breadth(a);
			break;

	}
	printf("\n");
	return 0;

}

void depth(int num, int a[][N+1])
{
	int i;

	v[num] = 1; //�K��t���O��K��ς݂ɍX�V

	/* ���̏ꏊ�ɉ��炩�̕K�v�ȏ��������� */
	
	/* �S�Ẵm�[�h�ɂ��āC�K�����͂�����ʂ� */

	for( i = 0; i <= N; i++)
	{
		/* �m�[�h����o��ӂƂ��̐�̃m�[�h�̖K��󋵂��`�F�b�N */
		if( a[num][i] == 1 && v[i] == 0)
		 {
			/* ���K��ł���ΖK�₷�� */
			 printf("�m�[�h %d ����%d ��K��\n", num, i);
			 depth( i, a ); //depth �̍ċA�Ăяo��
		}
	}
}

void breadth(int a[][N+1])
{
	int i, j,start;

	printf("�ǂ̃m�[�h����T�����܂����H:");
	scanf("%d",&start);

	/* �K��t���O������������*/
	for( i = 1; i <= N; i++)
		v[i] = 0;

	/* �T���J�n*/
	// �o���_�ł���m�[�h���L���[�ɓ����
	queue[tail++] = start;
	v[start] = 1; // �K��ς݂ɂ��Ă���

	 /* �L���[����ɂȂ�܂ŌJ��Ԃ�*/
	 do{
		 i = queue[head++]; //�L���[����1���o��

		 for( j = 1; j <= N; j++)
		 {
			 /* �m�[�h����o��ӂƂ��̐�̃m�[�h�̖K��󋵂��`�F�b�N*/
			 if( a[i][j] == 1 && v[j] == 0)
			 {
				 /* ���K��ł���L���[�ɓ����*/
				 queue[tail++] = j;
				 v[j] = 1; // �L���[�ɓ��ꂽ���_�ŖK��ς݂ɂ��Ă��܂�
			 }
		 }
		// �K��󋵂̕\��
		printf("%d  ", i);
		if(i!=N) printf("-> ");
		} while ( head != tail );

	 printf("\n");
}