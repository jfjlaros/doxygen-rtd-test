import subprocess


project = u'Test'
author = u'Jeroen F.J. Laros'
copyright = u'2019'

extensions = ['breathe']
breathe_projects = {'doxygen': 'xml'}
breathe_default_project = 'doxygen'

master_doc = 'index'

html_theme = 'sphinx_rtd_theme'


subprocess.call('pip install breathe==4.3.1; doxygen', shell=True)
