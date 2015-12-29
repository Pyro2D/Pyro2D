import Scene


class TestElement(Scene.Element):
    def __init__(self, name):
        super(TestElement, self).__init__(name)

    def draw(self, window):
        print "Test Element Draw"

    def update(self, delta):
        pass
