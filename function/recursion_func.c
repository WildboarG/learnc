#include <stdio.h>
#include <stdlib.h>


 void c(){           
		 printf("[%s]begin running~\n",__FUNCTION__);
    	 printf("[%s]end\n",__FUNCTION__);         
  }

 void b(){           
		 printf("[%s]begin running~\n",__FUNCTION__);
         printf("[%s] call c();\n",__FUNCTION__);
		 c();
 		 printf("[%s] return from c()\n",__FUNCTION__);
    	 printf("[%s]end\n",__FUNCTION__);         
  }
 void a(){           
		 printf("[%s]begin running~\n",__FUNCTION__);
         printf("[%s] call b();\n",__FUNCTION__);
		 b();
 		 printf("[%s] return from b()\n",__FUNCTION__);
    	 printf("[%s]end\n",__FUNCTION__);         
  }



int main(){

		printf("[%s]begin running~\n",__FUNCTION__);
		printf("[%s] call a();\n",__FUNCTION__);
		a();
		printf("[%s] return from a()\n",__FUNCTION__);
		printf("[%s]end\n",__FUNCTION__);


		return 0;
}
