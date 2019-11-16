import subprocess


project = u'Test'
author = u'Me'

extensions = ['breathe']
breathe_projects = {'ctest': 'xml'}
breathe_default_project = 'ctest'

master_doc = 'index'

#html_theme = 'sphinx_rtd_theme'


subprocess.call('pip install breathe==4.3.1; doxygen', shell=True)
