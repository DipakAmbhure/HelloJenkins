pipeline {
    agent any

    stages {
        stage('Clone repo') {
		steps {
			sh 'git clone https://github.com/DipakAmbhure/HelloJenkins.git'
			sh 'ls'
		}
	}
	stage('run make'){
		steps {
			sh 'make'
		}
	}

   }
}
