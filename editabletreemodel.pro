TEMPLATE = subdirs
CONFIG += ordered
SUBDIRS += core test app

app.depends = core
