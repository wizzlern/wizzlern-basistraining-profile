core = 7
api = 2

projects[drupal][type] = "core"
projects[drupal][download][type] = "get"
projects[drupal][download][url] = "http://files.aegir.cc/core/drupal-7.28.1.tar.gz"

; Modules
projects[] = "l10n_update"
projects[] = "ctools"
projects[] = "views"
projects[] = "features"
projects[] = "strongarm"

; Themes
projects[] = "academia"

libraries[profiler][download][type] = "get"
libraries[profiler][directory_name] = "profiler"
libraries[profiler][download][url] = "http://ftp.drupal.org/files/projects/profiler-7.x-2.0-beta1.tar.gz"

