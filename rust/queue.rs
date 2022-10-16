struct Queue<T> {
    queue: Vec<T>
}


impl<T> Queue<T> {
    fn new() -> Self {
        Queue { queue: Vec::new() }
    }

    fn enqueue(&mut self, item: T) {
        self.queue.push(item);
    }

    fn dequeue(&mut self) -> Option<T> {
        if self.is_empty() {
            return None
        }
        return Some(self.queue.remove(0))
    }

    fn len(&self) -> usize {
        self.queue.len()
    }

    fn is_empty(&self) -> bool {
        self.queue.is_empty()
    }

    fn peek(&self) -> Option<&T> {
        self.queue.first()
    }
}

#[test]
fn test_enqueue() {
    let mut q: Queue<i32> = Queue::new();
    assert!(q.is_empty());
    assert_eq!(q.len(), 0);
    q.enqueue(3);
    assert!(!q.is_empty());
    assert_eq!(q.len(), 1);
}

#[test]
fn test_dequeue() {
    let mut q: Queue<i32> = Queue::new();
    q.enqueue(3);
    assert!(!q.is_empty());
    assert_eq!(q.len(), 1);
    let item = q.dequeue();
    assert_eq!(item.unwrap(), 3);
}

#[test]
fn test_empty_dequeue() {
    let mut q: Queue<i32> = Queue::new();
    assert!(q.is_empty());
    let item = q.dequeue();
    assert!(item.is_none());
}

#[test]
fn test_peek() {
    let mut q: Queue<i32> = Queue::new();
    q.enqueue(3);
    q.enqueue(5);
    let item = q.peek();
    assert_eq!(*item.unwrap(), 3);
}
