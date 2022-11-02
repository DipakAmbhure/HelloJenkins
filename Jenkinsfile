pipeline {
    agent any

    stages {
        stage('Clone repo') {
		steps {
			echo "cloning..."
			sh 'rm -rf HelloJenkins'
			sh 'git clone https://github.com/DipakAmbhure/HelloJenkins.git'
		}
	}
	stage('run make'){
		steps {
			sh 'make'
		}
	}
	stage('run'){
		steps {
			sh 'chmod +x cal'
			sh './cal'
		}
	}

   }
}
