/*�ȉ��̂悤�ȕH�`��\���������B�i������͂����N�i�̕H�`���\�������B�ȉ���N��4�̏ꍇ�ł���
�@    *
	 ***
	*****
   *******
    *****
	 ***
	  *

  �g�p���@�i���s��j�F
    �i������͂����N�i�̕H�`���\������܂�
	�i������͂��Ă�������
	N��4
	  *
	 ***
	*****
   *******
    *****
	 ***
	  *

�@���͏����F
 �@�i���𐮐��^�iint�^�j�ŃL�[�{�[�h������͂���
  �i0�ȉ��̏ꍇ�͍ē��͂���j

  �o�͏����F
   �Ђ��`���f�B�X�v���C�ɏo�͂���

  �菇�F
   ���i�\�����邩���́iN����́j
   �s�ԍ��̃��[�v�@i=1,2,...N
       �󔒂�\�����郋�[�v�@j=1,2,...N-i
	     �󔒂�\��

	�@ *��\�����郋�[�v�@j=1,2,...2*i-1
	     *��\��

�@�@�s�ԍ��̃��[�v�@k=N-1,N-2,...1
       �󔒂�\�����郋�[�v�@l=1,2,...N-i
	     �󔒂�\��

	�@ *��\�����郋�[�v�@l=1,2,...2*N-1-2*k
	     *��\��

�@�쐬���ԁF�@�\�z�c60��
 �@�@�@�@�@�@ ���ہc90��
�@
  �X�e�b�v���F�\�z�c70�s
  �@�@�@�@�@�@���ہc107�s

  �쐬�ҁF������
  �쐬���F2014�N2��10��
*/

#include<stdio.h>
int main(void)
{
	int N;                      /*�i��*/
	int i,j;                    /*�H�^�̏㔼���֌W*/
	int k,l;                    /*�H�^�̉������֌W*/

	/*�v���O�����̐���*/
	printf("�i������͂����N�i�̕H�`���\������܂�");   

	/*�i���̓���*/
	do{
		printf("�i������͂��Ă��������F\n N=");            
	    scanf("%d",&N);
	}while(N<=0);
	
   /*��������H�^�̏㔼��*/                                                   
	   
	 /*  N-i�̃��[�v*/
	for(i=1; i<=N; i++){                                
		for(j=1;j<=N-i;j++){    
        /*     �󔒂�\��*/
			printf(" ");                                 
		}
		
		/*�@2*i-1�̃��[�v*/
	    for(j=1;j<=2*i-1;j++){   
			 /*     *��\��*/
			printf("*");                                
    	}
		 /*�@���s*/
		printf("\n");                                   
	}
   
	/*��������H�^�̉�����*/

	 /*N�s�̃��[�v(k)*/
	for(k=1;k<=N;k++){      
		 /*  k�̃��[�v*/
		for(l=1;l<=k;l++){       
			 /*     �󔒂�\��*/
			printf(" ");                                
		}
		/*2*N-1-2*k�̃��[�v*/
		for(l=1;l<=2*N-1-2*k;l++){             
			/*     *��\��*/
			printf("*");                                 
		}
		/*���s*/
		printf("\n");                                    
	}
	return 0;
}