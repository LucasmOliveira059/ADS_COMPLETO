// Objetos para a função de trocar o texto

const obj_txt_texto = document.querySelector('#txt_sangue')
const obj_bt_troca_texto = document.querySelector('#bt_troca_txt')
const obj_p_txt_troca = document.querySelector('#p_txt_troca')



obj_bt_troca_texto.addEventListener('click', FunMudaTxt)

function FunMudaTxt(){
    if( obj_txt_texto.value != ''){
        obj_p_txt_troca.innerText = obj_txt_texto.value;
    } else{
        alert('Digite um texto nesse campo!')
    }
}

//Criando a calculadora e seus objetos

const obj_display_txt = document.querySelector('#txt_display')
const arr_botoes = document.querySelectorAll('.botoes')
const obj_bt_fim = document.querySelector('#bt_fim')
const obj_div_result = document.querySelector('#div_result')

let limpeza = false
let cont = 0

for(obj_bt_num of arr_botoes) {
    const addnum = obj_bt_num.getAttribute('alt')
    obj_bt_num.addEventListener('click', function() {FunMontaDisplay(addnum)})
}

obj_bt_fim.addEventListener('click', FunCalcula)

// Criando as funções

function FunMontaDisplay(par_alt){
    if(limpeza == true){
        obj_display_txt.value = ''
        obj_div_result.innerText = ''
        limpeza = false
        cont = 0
    }
    if(cont < 10){
        obj_display_txt.value += par_alt
        cont++
    }
    else{alert('Você ultrapassou o limite!')
        limpeza = true
    }
}
// Tratamento de errros

function FunCalcula(){
   var ano = (obj_display_txt.value.substr(-4))
   let morte = eval(2021 - ano)
   let vida = eval(90 - morte)
    
   try{  
            
        if( vida > 75){
           obj_div_result.innerText = 'Você ainda vai viver bastante'
        } 
        if(vida <=75 && vida > 50){
            obj_div_result.innerText = 'Não se preocupe, Você ainda é jovem'
        }
        if(vida <=50 && vida >30){
            obj_div_result.innerText = 'Você alcançou a idade adulta, tome cuidado!'
        }
        if(vida <=30 && vida >15){
            obj_div_result.innerText = 'Cuide da sua saúde pois a morte o espreita!'
        }
        if(vida <=15 && vida >= 1){
            obj_div_result.innerText = 'Oi! Você tem um plano funerário?'
        }
        if(vida < 1){
            obj_div_result.innerText = 'Você já deveria estar morto. vou te pegar'
        }
    }
    catch (erro){
        alert('Algo deu errado: ' + erro)
        limpeza = true
    }
}

//deu tudo certo até aqui 

const obj_img_audio = document.querySelector("#img_audio")

obj_img_audio.addEventListener('click', function(){const audio = document.querySelector('audio')
audio.play()
})