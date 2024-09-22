//DOCUMENT OBJECT MODEL(DOM);

console.log(document)

//note - select the element;

// note - document.getElementById
const heading = document.getElementById('heading');
console.log(heading);
console.dir(heading);
console.dir(heading.innerText);


//NOTE - document.getelementsByClassName
const list = document.getElementsByClassName('special');
console.log(list)


//NOTE - document.getElementsByTagName() ;
//review - getelementsByTagname always returns htmlCollection which looks like an array but it is not an array
const para = document.getElementsByTagName('p');
console.log(para)
console.log(para[0])

//todo convert the html collection 'para' in to an array (use spread operator) ;
const newpara = [...para];
console.log(newpara);

newpara.forEach((el) => {
    console.log(el.innerText)
})




// para.forEach(Element => {
//     console.log(Element)
// })


// note - document.querySelector




// note - document.querySelectorall




// const document = {
//     getElementByTagname : Function
// }