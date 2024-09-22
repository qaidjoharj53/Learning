// External JavaScript for DOM Manipulation

// Task 1: Get and Set Attribute
function getAttributeValue() {
    const img = document.getElementById('myImage');
    const altText = img.getAttribute('alt');
    document.getElementById('attributeValue').innerText = `Alt attribute: ${altText}`;
}

function setAttributeValue() {
    const img = document.getElementById('myImage');
    img.setAttribute('alt', 'Updated Alt Text');
    alert('Alt attribute updated to: ' + img.getAttribute('alt'));
}

// Task 3: Style Manipulation
const myDiv = document.getElementById('myDiv');

myDiv.addEventListener('mouseover', () => {
    myDiv.style.backgroundColor = 'lightgreen';
});

myDiv.addEventListener('mouseout', () => {
    myDiv.style.backgroundColor = 'lightblue';
});

function updateFontSize() {
    const fontSize = document.getElementById('fontSizeInput').value;
    myDiv.style.fontSize = `${fontSize}px`;
}

// Task 4: Manipulating Classes
function addHighlight() {
    document.getElementById('myParagraph').classList.add('highlight');
}

function removeHighlight() {
    document.getElementById('myParagraph').classList.remove('highlight');
}

function toggleHidden() {
    document.getElementById('myParagraph').classList.toggle('hidden');
}

// Task 5: Creating Elements
function createParagraph() {
    const paragraph = document.createElement('p');
    paragraph.textContent = 'This is a new paragraph.';
    document.body.appendChild(paragraph);
}

function createListItem() {
    const listItemText = document.getElementById('listItemText').value;
    const listItem = document.createElement('li');
    listItem.textContent = listItemText;
    const myList = document.getElementById('myList');
    myList.insertBefore(listItem, myList.firstChild);
}

// Task 6: Append, Prepend, or insertBefore
function appendDiv() {
    const newDiv = document.createElement('div');
    newDiv.textContent = 'This is a new div appended to the container.';
    document.getElementById('container').appendChild(newDiv);
}

function prependImage() {
    const newImage = document.createElement('img');
    newImage.src = 'https://via.placeholder.com/150';
    const container = document.getElementById('container');
    container.insertBefore(newImage, container.firstChild);
}

function insertParagraph() {
    const newParagraph = document.createElement('p');
    newParagraph.textContent = 'This paragraph is inserted before the reference element.';
    const referenceElement = document.getElementById('referenceElement');
    referenceElement.parentNode.insertBefore(newParagraph, referenceElement);
}

// Task 7: Remove Child and Remove
function removeChildElement() {
    const parent = document.getElementById('parent');
    const child = document.getElementById('childElement');
    parent.removeChild(child);
}

function removeSelf() {
    const button = document.querySelector('button[onclick="removeSelf()"]');
    button.remove();
}
