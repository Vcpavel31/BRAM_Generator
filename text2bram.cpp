#include "text2bram.h"
#include "ui_text2bram.h"
#include "QFileDialog"
#include "QLineEdit"

QString memory_initialization_radix = "16";
QStringList memory_initialization_vector;
QString HexStrData;
QString File = "";

TEXT2BRAM::TEXT2BRAM(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TEXT2BRAM)
{
    ui->setupUi(this);

}

TEXT2BRAM::~TEXT2BRAM()
{
    delete ui;
}

void TEXT2BRAM::on_pushButton_2_pressed()
{

    File = QFileDialog::getOpenFileName(this, "Select old COE file", "Documents", "Init file (*.coe *.txt)");
    qDebug()<<"Init File"<< File;
    QFile file(File);
        if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
            return;

        while (!file.atEnd()) {
            QString line = QString(file.readLine());
          if (line.contains("memory_initialization_radix",Qt::CaseInsensitive)) memory_initialization_radix=line.split("=")[1].split(";")[0];
          if (line.contains("memory_initialization_vector",Qt::CaseInsensitive)) memory_initialization_vector << line.split("=")[1].split(";")[0].split(" ");
        }
        while (memory_initialization_vector.length() < 480) {
            memory_initialization_vector << "20";
        }
        qDebug()<<"memory_initialization_radix"<< memory_initialization_radix;
        qDebug()<<"memory_initialization_vector"<< memory_initialization_vector;
    file.close();
}


void TEXT2BRAM::on_pushButton_3_pressed()
{
    while (memory_initialization_vector.length() < 480) {
        memory_initialization_vector << "20";
    }

    lineEdit_1->setMaxLength(1);
        lineEdit_2->setMaxLength(1);
        lineEdit_3->setMaxLength(1);
        lineEdit_4->setMaxLength(1);
        lineEdit_5->setMaxLength(1);
        lineEdit_6->setMaxLength(1);
        lineEdit_7->setMaxLength(1);
        lineEdit_8->setMaxLength(1);
        lineEdit_9->setMaxLength(1);
        lineEdit_10->setMaxLength(1);
        lineEdit_11->setMaxLength(1);
        lineEdit_12->setMaxLength(1);
        lineEdit_13->setMaxLength(1);
        lineEdit_14->setMaxLength(1);
        lineEdit_15->setMaxLength(1);
        lineEdit_16->setMaxLength(1);
        lineEdit_17->setMaxLength(1);
        lineEdit_18->setMaxLength(1);
        lineEdit_19->setMaxLength(1);
        lineEdit_20->setMaxLength(1);
        lineEdit_21->setMaxLength(1);
        lineEdit_22->setMaxLength(1);
        lineEdit_23->setMaxLength(1);
        lineEdit_24->setMaxLength(1);
        lineEdit_25->setMaxLength(1);
        lineEdit_26->setMaxLength(1);
        lineEdit_27->setMaxLength(1);
        lineEdit_28->setMaxLength(1);
        lineEdit_29->setMaxLength(1);
        lineEdit_30->setMaxLength(1);
        lineEdit_31->setMaxLength(1);
        lineEdit_32->setMaxLength(1);
        lineEdit_33->setMaxLength(1);
        lineEdit_34->setMaxLength(1);
        lineEdit_35->setMaxLength(1);
        lineEdit_36->setMaxLength(1);
        lineEdit_37->setMaxLength(1);
        lineEdit_38->setMaxLength(1);
        lineEdit_39->setMaxLength(1);
        lineEdit_40->setMaxLength(1);
        lineEdit_41->setMaxLength(1);
        lineEdit_42->setMaxLength(1);
        lineEdit_43->setMaxLength(1);
        lineEdit_44->setMaxLength(1);
        lineEdit_45->setMaxLength(1);
        lineEdit_46->setMaxLength(1);
        lineEdit_47->setMaxLength(1);
        lineEdit_48->setMaxLength(1);
        lineEdit_49->setMaxLength(1);
        lineEdit_50->setMaxLength(1);
        lineEdit_51->setMaxLength(1);
        lineEdit_52->setMaxLength(1);
        lineEdit_53->setMaxLength(1);
        lineEdit_54->setMaxLength(1);
        lineEdit_55->setMaxLength(1);
        lineEdit_56->setMaxLength(1);
        lineEdit_57->setMaxLength(1);
        lineEdit_58->setMaxLength(1);
        lineEdit_59->setMaxLength(1);
        lineEdit_60->setMaxLength(1);
        lineEdit_61->setMaxLength(1);
        lineEdit_62->setMaxLength(1);
        lineEdit_63->setMaxLength(1);
        lineEdit_64->setMaxLength(1);
        lineEdit_65->setMaxLength(1);
        lineEdit_66->setMaxLength(1);
        lineEdit_67->setMaxLength(1);
        lineEdit_68->setMaxLength(1);
        lineEdit_69->setMaxLength(1);
        lineEdit_70->setMaxLength(1);
        lineEdit_71->setMaxLength(1);
        lineEdit_72->setMaxLength(1);
        lineEdit_73->setMaxLength(1);
        lineEdit_74->setMaxLength(1);
        lineEdit_75->setMaxLength(1);
        lineEdit_76->setMaxLength(1);
        lineEdit_77->setMaxLength(1);
        lineEdit_78->setMaxLength(1);
        lineEdit_79->setMaxLength(1);
        lineEdit_80->setMaxLength(1);
        lineEdit_81->setMaxLength(1);
        lineEdit_82->setMaxLength(1);
        lineEdit_83->setMaxLength(1);
        lineEdit_84->setMaxLength(1);
        lineEdit_85->setMaxLength(1);
        lineEdit_86->setMaxLength(1);
        lineEdit_87->setMaxLength(1);
        lineEdit_88->setMaxLength(1);
        lineEdit_89->setMaxLength(1);
        lineEdit_90->setMaxLength(1);
        lineEdit_91->setMaxLength(1);
        lineEdit_92->setMaxLength(1);
        lineEdit_93->setMaxLength(1);
        lineEdit_94->setMaxLength(1);
        lineEdit_95->setMaxLength(1);
        lineEdit_96->setMaxLength(1);
        lineEdit_97->setMaxLength(1);
        lineEdit_98->setMaxLength(1);
        lineEdit_99->setMaxLength(1);
        lineEdit_100->setMaxLength(1);
        lineEdit_101->setMaxLength(1);
        lineEdit_102->setMaxLength(1);
        lineEdit_103->setMaxLength(1);
        lineEdit_104->setMaxLength(1);
        lineEdit_105->setMaxLength(1);
        lineEdit_106->setMaxLength(1);
        lineEdit_107->setMaxLength(1);
        lineEdit_108->setMaxLength(1);
        lineEdit_109->setMaxLength(1);
        lineEdit_110->setMaxLength(1);
        lineEdit_111->setMaxLength(1);
        lineEdit_112->setMaxLength(1);
        lineEdit_113->setMaxLength(1);
        lineEdit_114->setMaxLength(1);
        lineEdit_115->setMaxLength(1);
        lineEdit_116->setMaxLength(1);
        lineEdit_117->setMaxLength(1);
        lineEdit_118->setMaxLength(1);
        lineEdit_119->setMaxLength(1);
        lineEdit_120->setMaxLength(1);
        lineEdit_121->setMaxLength(1);
        lineEdit_122->setMaxLength(1);
        lineEdit_123->setMaxLength(1);
        lineEdit_124->setMaxLength(1);
        lineEdit_125->setMaxLength(1);
        lineEdit_126->setMaxLength(1);
        lineEdit_127->setMaxLength(1);
        lineEdit_128->setMaxLength(1);
        lineEdit_129->setMaxLength(1);
        lineEdit_130->setMaxLength(1);
        lineEdit_131->setMaxLength(1);
        lineEdit_132->setMaxLength(1);
        lineEdit_133->setMaxLength(1);
        lineEdit_134->setMaxLength(1);
        lineEdit_135->setMaxLength(1);
        lineEdit_136->setMaxLength(1);
        lineEdit_137->setMaxLength(1);
        lineEdit_138->setMaxLength(1);
        lineEdit_139->setMaxLength(1);
        lineEdit_140->setMaxLength(1);
        lineEdit_141->setMaxLength(1);
        lineEdit_142->setMaxLength(1);
        lineEdit_143->setMaxLength(1);
        lineEdit_144->setMaxLength(1);
        lineEdit_145->setMaxLength(1);
        lineEdit_146->setMaxLength(1);
        lineEdit_147->setMaxLength(1);
        lineEdit_148->setMaxLength(1);
        lineEdit_149->setMaxLength(1);
        lineEdit_150->setMaxLength(1);
        lineEdit_151->setMaxLength(1);
        lineEdit_152->setMaxLength(1);
        lineEdit_153->setMaxLength(1);
        lineEdit_154->setMaxLength(1);
        lineEdit_155->setMaxLength(1);
        lineEdit_156->setMaxLength(1);
        lineEdit_157->setMaxLength(1);
        lineEdit_158->setMaxLength(1);
        lineEdit_159->setMaxLength(1);
        lineEdit_160->setMaxLength(1);
        lineEdit_161->setMaxLength(1);
        lineEdit_162->setMaxLength(1);
        lineEdit_163->setMaxLength(1);
        lineEdit_164->setMaxLength(1);
        lineEdit_165->setMaxLength(1);
        lineEdit_166->setMaxLength(1);
        lineEdit_167->setMaxLength(1);
        lineEdit_168->setMaxLength(1);
        lineEdit_169->setMaxLength(1);
        lineEdit_170->setMaxLength(1);
        lineEdit_171->setMaxLength(1);
        lineEdit_172->setMaxLength(1);
        lineEdit_173->setMaxLength(1);
        lineEdit_174->setMaxLength(1);
        lineEdit_175->setMaxLength(1);
        lineEdit_176->setMaxLength(1);
        lineEdit_177->setMaxLength(1);
        lineEdit_178->setMaxLength(1);
        lineEdit_179->setMaxLength(1);
        lineEdit_180->setMaxLength(1);
        lineEdit_181->setMaxLength(1);
        lineEdit_182->setMaxLength(1);
        lineEdit_183->setMaxLength(1);
        lineEdit_184->setMaxLength(1);
        lineEdit_185->setMaxLength(1);
        lineEdit_186->setMaxLength(1);
        lineEdit_187->setMaxLength(1);
        lineEdit_188->setMaxLength(1);
        lineEdit_189->setMaxLength(1);
        lineEdit_190->setMaxLength(1);
        lineEdit_191->setMaxLength(1);
        lineEdit_192->setMaxLength(1);
        lineEdit_193->setMaxLength(1);
        lineEdit_194->setMaxLength(1);
        lineEdit_195->setMaxLength(1);
        lineEdit_196->setMaxLength(1);
        lineEdit_197->setMaxLength(1);
        lineEdit_198->setMaxLength(1);
        lineEdit_199->setMaxLength(1);
        lineEdit_200->setMaxLength(1);
        lineEdit_201->setMaxLength(1);
        lineEdit_202->setMaxLength(1);
        lineEdit_203->setMaxLength(1);
        lineEdit_204->setMaxLength(1);
        lineEdit_205->setMaxLength(1);
        lineEdit_206->setMaxLength(1);
        lineEdit_207->setMaxLength(1);
        lineEdit_208->setMaxLength(1);
        lineEdit_209->setMaxLength(1);
        lineEdit_210->setMaxLength(1);
        lineEdit_211->setMaxLength(1);
        lineEdit_212->setMaxLength(1);
        lineEdit_213->setMaxLength(1);
        lineEdit_214->setMaxLength(1);
        lineEdit_215->setMaxLength(1);
        lineEdit_216->setMaxLength(1);
        lineEdit_217->setMaxLength(1);
        lineEdit_218->setMaxLength(1);
        lineEdit_219->setMaxLength(1);
        lineEdit_220->setMaxLength(1);
        lineEdit_221->setMaxLength(1);
        lineEdit_222->setMaxLength(1);
        lineEdit_223->setMaxLength(1);
        lineEdit_224->setMaxLength(1);
        lineEdit_225->setMaxLength(1);
        lineEdit_226->setMaxLength(1);
        lineEdit_227->setMaxLength(1);
        lineEdit_228->setMaxLength(1);
        lineEdit_229->setMaxLength(1);
        lineEdit_230->setMaxLength(1);
        lineEdit_231->setMaxLength(1);
        lineEdit_232->setMaxLength(1);
        lineEdit_233->setMaxLength(1);
        lineEdit_234->setMaxLength(1);
        lineEdit_235->setMaxLength(1);
        lineEdit_236->setMaxLength(1);
        lineEdit_237->setMaxLength(1);
        lineEdit_238->setMaxLength(1);
        lineEdit_239->setMaxLength(1);
        lineEdit_240->setMaxLength(1);
        lineEdit_241->setMaxLength(1);
        lineEdit_242->setMaxLength(1);
        lineEdit_243->setMaxLength(1);
        lineEdit_244->setMaxLength(1);
        lineEdit_245->setMaxLength(1);
        lineEdit_246->setMaxLength(1);
        lineEdit_247->setMaxLength(1);
        lineEdit_248->setMaxLength(1);
        lineEdit_249->setMaxLength(1);
        lineEdit_250->setMaxLength(1);
        lineEdit_251->setMaxLength(1);
        lineEdit_252->setMaxLength(1);
        lineEdit_253->setMaxLength(1);
        lineEdit_254->setMaxLength(1);
        lineEdit_255->setMaxLength(1);
        lineEdit_256->setMaxLength(1);
        lineEdit_257->setMaxLength(1);
        lineEdit_258->setMaxLength(1);
        lineEdit_259->setMaxLength(1);
        lineEdit_260->setMaxLength(1);
        lineEdit_261->setMaxLength(1);
        lineEdit_262->setMaxLength(1);
        lineEdit_263->setMaxLength(1);
        lineEdit_264->setMaxLength(1);
        lineEdit_265->setMaxLength(1);
        lineEdit_266->setMaxLength(1);
        lineEdit_267->setMaxLength(1);
        lineEdit_268->setMaxLength(1);
        lineEdit_269->setMaxLength(1);
        lineEdit_270->setMaxLength(1);
        lineEdit_271->setMaxLength(1);
        lineEdit_272->setMaxLength(1);
        lineEdit_273->setMaxLength(1);
        lineEdit_274->setMaxLength(1);
        lineEdit_275->setMaxLength(1);
        lineEdit_276->setMaxLength(1);
        lineEdit_277->setMaxLength(1);
        lineEdit_278->setMaxLength(1);
        lineEdit_279->setMaxLength(1);
        lineEdit_280->setMaxLength(1);
        lineEdit_281->setMaxLength(1);
        lineEdit_282->setMaxLength(1);
        lineEdit_283->setMaxLength(1);
        lineEdit_284->setMaxLength(1);
        lineEdit_285->setMaxLength(1);
        lineEdit_286->setMaxLength(1);
        lineEdit_287->setMaxLength(1);
        lineEdit_288->setMaxLength(1);
        lineEdit_289->setMaxLength(1);
        lineEdit_290->setMaxLength(1);
        lineEdit_291->setMaxLength(1);
        lineEdit_292->setMaxLength(1);
        lineEdit_293->setMaxLength(1);
        lineEdit_294->setMaxLength(1);
        lineEdit_295->setMaxLength(1);
        lineEdit_296->setMaxLength(1);
        lineEdit_297->setMaxLength(1);
        lineEdit_298->setMaxLength(1);
        lineEdit_299->setMaxLength(1);
        lineEdit_300->setMaxLength(1);
        lineEdit_301->setMaxLength(1);
        lineEdit_302->setMaxLength(1);
        lineEdit_303->setMaxLength(1);
        lineEdit_304->setMaxLength(1);
        lineEdit_305->setMaxLength(1);
        lineEdit_306->setMaxLength(1);
        lineEdit_307->setMaxLength(1);
        lineEdit_308->setMaxLength(1);
        lineEdit_309->setMaxLength(1);
        lineEdit_310->setMaxLength(1);
        lineEdit_311->setMaxLength(1);
        lineEdit_312->setMaxLength(1);
        lineEdit_313->setMaxLength(1);
        lineEdit_314->setMaxLength(1);
        lineEdit_315->setMaxLength(1);
        lineEdit_316->setMaxLength(1);
        lineEdit_317->setMaxLength(1);
        lineEdit_318->setMaxLength(1);
        lineEdit_319->setMaxLength(1);
        lineEdit_320->setMaxLength(1);
        lineEdit_321->setMaxLength(1);
        lineEdit_322->setMaxLength(1);
        lineEdit_323->setMaxLength(1);
        lineEdit_324->setMaxLength(1);
        lineEdit_325->setMaxLength(1);
        lineEdit_326->setMaxLength(1);
        lineEdit_327->setMaxLength(1);
        lineEdit_328->setMaxLength(1);
        lineEdit_329->setMaxLength(1);
        lineEdit_330->setMaxLength(1);
        lineEdit_331->setMaxLength(1);
        lineEdit_332->setMaxLength(1);
        lineEdit_333->setMaxLength(1);
        lineEdit_334->setMaxLength(1);
        lineEdit_335->setMaxLength(1);
        lineEdit_336->setMaxLength(1);
        lineEdit_337->setMaxLength(1);
        lineEdit_338->setMaxLength(1);
        lineEdit_339->setMaxLength(1);
        lineEdit_340->setMaxLength(1);
        lineEdit_341->setMaxLength(1);
        lineEdit_342->setMaxLength(1);
        lineEdit_343->setMaxLength(1);
        lineEdit_344->setMaxLength(1);
        lineEdit_345->setMaxLength(1);
        lineEdit_346->setMaxLength(1);
        lineEdit_347->setMaxLength(1);
        lineEdit_348->setMaxLength(1);
        lineEdit_349->setMaxLength(1);
        lineEdit_350->setMaxLength(1);
        lineEdit_351->setMaxLength(1);
        lineEdit_352->setMaxLength(1);
        lineEdit_353->setMaxLength(1);
        lineEdit_354->setMaxLength(1);
        lineEdit_355->setMaxLength(1);
        lineEdit_356->setMaxLength(1);
        lineEdit_357->setMaxLength(1);
        lineEdit_358->setMaxLength(1);
        lineEdit_359->setMaxLength(1);
        lineEdit_360->setMaxLength(1);
        lineEdit_361->setMaxLength(1);
        lineEdit_362->setMaxLength(1);
        lineEdit_363->setMaxLength(1);
        lineEdit_364->setMaxLength(1);
        lineEdit_365->setMaxLength(1);
        lineEdit_366->setMaxLength(1);
        lineEdit_367->setMaxLength(1);
        lineEdit_368->setMaxLength(1);
        lineEdit_369->setMaxLength(1);
        lineEdit_370->setMaxLength(1);
        lineEdit_371->setMaxLength(1);
        lineEdit_372->setMaxLength(1);
        lineEdit_373->setMaxLength(1);
        lineEdit_374->setMaxLength(1);
        lineEdit_375->setMaxLength(1);
        lineEdit_376->setMaxLength(1);
        lineEdit_377->setMaxLength(1);
        lineEdit_378->setMaxLength(1);
        lineEdit_379->setMaxLength(1);
        lineEdit_380->setMaxLength(1);
        lineEdit_381->setMaxLength(1);
        lineEdit_382->setMaxLength(1);
        lineEdit_383->setMaxLength(1);
        lineEdit_384->setMaxLength(1);
        lineEdit_385->setMaxLength(1);
        lineEdit_386->setMaxLength(1);
        lineEdit_387->setMaxLength(1);
        lineEdit_388->setMaxLength(1);
        lineEdit_389->setMaxLength(1);
        lineEdit_390->setMaxLength(1);
        lineEdit_391->setMaxLength(1);
        lineEdit_392->setMaxLength(1);
        lineEdit_393->setMaxLength(1);
        lineEdit_394->setMaxLength(1);
        lineEdit_395->setMaxLength(1);
        lineEdit_396->setMaxLength(1);
        lineEdit_397->setMaxLength(1);
        lineEdit_398->setMaxLength(1);
        lineEdit_399->setMaxLength(1);
        lineEdit_400->setMaxLength(1);
        lineEdit_401->setMaxLength(1);
        lineEdit_402->setMaxLength(1);
        lineEdit_403->setMaxLength(1);
        lineEdit_404->setMaxLength(1);
        lineEdit_405->setMaxLength(1);
        lineEdit_406->setMaxLength(1);
        lineEdit_407->setMaxLength(1);
        lineEdit_408->setMaxLength(1);
        lineEdit_409->setMaxLength(1);
        lineEdit_410->setMaxLength(1);
        lineEdit_411->setMaxLength(1);
        lineEdit_412->setMaxLength(1);
        lineEdit_413->setMaxLength(1);
        lineEdit_414->setMaxLength(1);
        lineEdit_415->setMaxLength(1);
        lineEdit_416->setMaxLength(1);
        lineEdit_417->setMaxLength(1);
        lineEdit_418->setMaxLength(1);
        lineEdit_419->setMaxLength(1);
        lineEdit_420->setMaxLength(1);
        lineEdit_421->setMaxLength(1);
        lineEdit_422->setMaxLength(1);
        lineEdit_423->setMaxLength(1);
        lineEdit_424->setMaxLength(1);
        lineEdit_425->setMaxLength(1);
        lineEdit_426->setMaxLength(1);
        lineEdit_427->setMaxLength(1);
        lineEdit_428->setMaxLength(1);
        lineEdit_429->setMaxLength(1);
        lineEdit_430->setMaxLength(1);
        lineEdit_431->setMaxLength(1);
        lineEdit_432->setMaxLength(1);
        lineEdit_433->setMaxLength(1);
        lineEdit_434->setMaxLength(1);
        lineEdit_435->setMaxLength(1);
        lineEdit_436->setMaxLength(1);
        lineEdit_437->setMaxLength(1);
        lineEdit_438->setMaxLength(1);
        lineEdit_439->setMaxLength(1);
        lineEdit_440->setMaxLength(1);
        lineEdit_441->setMaxLength(1);
        lineEdit_442->setMaxLength(1);
        lineEdit_443->setMaxLength(1);
        lineEdit_444->setMaxLength(1);
        lineEdit_445->setMaxLength(1);
        lineEdit_446->setMaxLength(1);
        lineEdit_447->setMaxLength(1);
        lineEdit_448->setMaxLength(1);
        lineEdit_449->setMaxLength(1);
        lineEdit_450->setMaxLength(1);
        lineEdit_451->setMaxLength(1);
        lineEdit_452->setMaxLength(1);
        lineEdit_453->setMaxLength(1);
        lineEdit_454->setMaxLength(1);
        lineEdit_455->setMaxLength(1);
        lineEdit_456->setMaxLength(1);
        lineEdit_457->setMaxLength(1);
        lineEdit_458->setMaxLength(1);
        lineEdit_459->setMaxLength(1);
        lineEdit_460->setMaxLength(1);
        lineEdit_461->setMaxLength(1);
        lineEdit_462->setMaxLength(1);
        lineEdit_463->setMaxLength(1);
        lineEdit_464->setMaxLength(1);
        lineEdit_465->setMaxLength(1);
        lineEdit_466->setMaxLength(1);
        lineEdit_467->setMaxLength(1);
        lineEdit_468->setMaxLength(1);
        lineEdit_469->setMaxLength(1);
        lineEdit_470->setMaxLength(1);
        lineEdit_471->setMaxLength(1);
        lineEdit_472->setMaxLength(1);
        lineEdit_473->setMaxLength(1);
        lineEdit_474->setMaxLength(1);
        lineEdit_475->setMaxLength(1);
        lineEdit_476->setMaxLength(1);
        lineEdit_477->setMaxLength(1);
        lineEdit_478->setMaxLength(1);
        lineEdit_479->setMaxLength(1);
        lineEdit_480->setMaxLength(1);

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

            lineEdit_1->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[0].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_1,0,0);

            lineEdit_2->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[1].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_2,0,1);

            lineEdit_3->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[2].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_3,0,2);

            lineEdit_4->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[3].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_4,0,3);

            lineEdit_5->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[4].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_5,0,4);

            lineEdit_6->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[5].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_6,0,5);

            lineEdit_7->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[6].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_7,0,6);

            lineEdit_8->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[7].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_8,0,7);

            lineEdit_9->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[8].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_9,0,8);

            lineEdit_10->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[9].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_10,0,9);

            lineEdit_11->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[10].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_11,0,10);

            lineEdit_12->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[11].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_12,0,11);

            lineEdit_13->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[12].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_13,0,12);

            lineEdit_14->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[13].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_14,0,13);

            lineEdit_15->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[14].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_15,0,14);

            lineEdit_16->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[15].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_16,0,15);

            lineEdit_17->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[16].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_17,0,16);

            lineEdit_18->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[17].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_18,0,17);

            lineEdit_19->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[18].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_19,0,18);

            lineEdit_20->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[19].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_20,0,19);

            lineEdit_21->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[20].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_21,2,0);

            lineEdit_22->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[21].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_22,2,1);

            lineEdit_23->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[22].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_23,2,2);

            lineEdit_24->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[23].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_24,2,3);

            lineEdit_25->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[24].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_25,2,4);

            lineEdit_26->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[25].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_26,2,5);

            lineEdit_27->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[26].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_27,2,6);

            lineEdit_28->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[27].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_28,2,7);

            lineEdit_29->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[28].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_29,2,8);

            lineEdit_30->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[29].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_30,2,9);

            lineEdit_31->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[30].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_31,2,10);

            lineEdit_32->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[31].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_32,2,11);

            lineEdit_33->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[32].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_33,2,12);

            lineEdit_34->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[33].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_34,2,13);

            lineEdit_35->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[34].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_35,2,14);

            lineEdit_36->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[35].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_36,2,15);

            lineEdit_37->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[36].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_37,2,16);

            lineEdit_38->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[37].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_38,2,17);

            lineEdit_39->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[38].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_39,2,18);

            lineEdit_40->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[39].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_40,2,19);

            lineEdit_41->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[40].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_41,1,0);

            lineEdit_42->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[41].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_42,1,1);

            lineEdit_43->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[42].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_43,1,2);

            lineEdit_44->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[43].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_44,1,3);

            lineEdit_45->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[44].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_45,1,4);

            lineEdit_46->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[45].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_46,1,5);

            lineEdit_47->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[46].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_47,1,6);

            lineEdit_48->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[47].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_48,1,7);

            lineEdit_49->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[48].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_49,1,8);

            lineEdit_50->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[49].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_50,1,9);

            lineEdit_51->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[50].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_51,1,10);

            lineEdit_52->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[51].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_52,1,11);

            lineEdit_53->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[52].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_53,1,12);

            lineEdit_54->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[53].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_54,1,13);

            lineEdit_55->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[54].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_55,1,14);

            lineEdit_56->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[55].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_56,1,15);

            lineEdit_57->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[56].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_57,1,16);

            lineEdit_58->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[57].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_58,1,17);

            lineEdit_59->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[58].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_59,1,18);

            lineEdit_60->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[59].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_60,1,19);

            lineEdit_61->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[60].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_61,3,0);

            lineEdit_62->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[61].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_62,3,1);

            lineEdit_63->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[62].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_63,3,2);

            lineEdit_64->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[63].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_64,3,3);

            lineEdit_65->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[64].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_65,3,4);

            lineEdit_66->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[65].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_66,3,5);

            lineEdit_67->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[66].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_67,3,6);

            lineEdit_68->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[67].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_68,3,7);

            lineEdit_69->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[68].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_69,3,8);

            lineEdit_70->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[69].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_70,3,9);

            lineEdit_71->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[70].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_71,3,10);

            lineEdit_72->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[71].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_72,3,11);

            lineEdit_73->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[72].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_73,3,12);

            lineEdit_74->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[73].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_74,3,13);

            lineEdit_75->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[74].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_75,3,14);

            lineEdit_76->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[75].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_76,3,15);

            lineEdit_77->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[76].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_77,3,16);

            lineEdit_78->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[77].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_78,3,17);

            lineEdit_79->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[78].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_79,3,18);

            lineEdit_80->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[79].toLatin1())));
            ui->gridLayout_1->addWidget(lineEdit_80,3,19);

            lineEdit_81->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[80].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_81,0,0);

            lineEdit_82->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[81].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_82,0,1);

            lineEdit_83->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[82].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_83,0,2);

            lineEdit_84->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[83].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_84,0,3);

            lineEdit_85->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[84].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_85,0,4);

            lineEdit_86->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[85].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_86,0,5);

            lineEdit_87->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[86].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_87,0,6);

            lineEdit_88->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[87].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_88,0,7);

            lineEdit_89->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[88].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_89,0,8);

            lineEdit_90->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[89].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_90,0,9);

            lineEdit_91->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[90].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_91,0,10);

            lineEdit_92->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[91].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_92,0,11);

            lineEdit_93->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[92].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_93,0,12);

            lineEdit_94->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[93].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_94,0,13);

            lineEdit_95->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[94].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_95,0,14);

            lineEdit_96->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[95].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_96,0,15);

            lineEdit_97->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[96].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_97,0,16);

            lineEdit_98->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[97].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_98,0,17);

            lineEdit_99->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[98].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_99,0,18);

            lineEdit_100->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[99].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_100,0,19);

            lineEdit_101->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[100].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_101,2,0);

            lineEdit_102->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[101].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_102,2,1);

            lineEdit_103->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[102].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_103,2,2);

            lineEdit_104->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[103].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_104,2,3);

            lineEdit_105->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[104].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_105,2,4);

            lineEdit_106->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[105].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_106,2,5);

            lineEdit_107->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[106].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_107,2,6);

            lineEdit_108->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[107].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_108,2,7);

            lineEdit_109->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[108].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_109,2,8);

            lineEdit_110->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[109].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_110,2,9);

            lineEdit_111->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[110].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_111,2,10);

            lineEdit_112->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[111].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_112,2,11);

            lineEdit_113->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[112].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_113,2,12);

            lineEdit_114->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[113].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_114,2,13);

            lineEdit_115->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[114].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_115,2,14);

            lineEdit_116->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[115].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_116,2,15);

            lineEdit_117->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[116].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_117,2,16);

            lineEdit_118->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[117].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_118,2,17);

            lineEdit_119->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[118].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_119,2,18);

            lineEdit_120->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[119].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_120,2,19);

            lineEdit_121->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[120].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_121,1,0);

            lineEdit_122->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[121].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_122,1,1);

            lineEdit_123->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[122].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_123,1,2);

            lineEdit_124->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[123].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_124,1,3);

            lineEdit_125->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[124].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_125,1,4);

            lineEdit_126->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[125].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_126,1,5);

            lineEdit_127->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[126].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_127,1,6);

            lineEdit_128->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[127].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_128,1,7);

            lineEdit_129->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[128].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_129,1,8);

            lineEdit_130->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[129].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_130,1,9);

            lineEdit_131->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[130].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_131,1,10);

            lineEdit_132->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[131].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_132,1,11);

            lineEdit_133->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[132].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_133,1,12);

            lineEdit_134->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[133].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_134,1,13);

            lineEdit_135->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[134].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_135,1,14);

            lineEdit_136->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[135].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_136,1,15);

            lineEdit_137->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[136].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_137,1,16);

            lineEdit_138->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[137].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_138,1,17);

            lineEdit_139->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[138].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_139,1,18);

            lineEdit_140->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[139].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_140,1,19);

            lineEdit_141->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[140].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_141,3,0);

            lineEdit_142->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[141].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_142,3,1);

            lineEdit_143->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[142].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_143,3,2);

            lineEdit_144->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[143].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_144,3,3);

            lineEdit_145->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[144].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_145,3,4);

            lineEdit_146->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[145].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_146,3,5);

            lineEdit_147->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[146].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_147,3,6);

            lineEdit_148->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[147].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_148,3,7);

            lineEdit_149->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[148].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_149,3,8);

            lineEdit_150->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[149].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_150,3,9);

            lineEdit_151->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[150].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_151,3,10);

            lineEdit_152->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[151].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_152,3,11);

            lineEdit_153->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[152].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_153,3,12);

            lineEdit_154->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[153].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_154,3,13);

            lineEdit_155->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[154].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_155,3,14);

            lineEdit_156->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[155].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_156,3,15);

            lineEdit_157->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[156].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_157,3,16);

            lineEdit_158->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[157].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_158,3,17);

            lineEdit_159->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[158].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_159,3,18);

            lineEdit_160->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[159].toLatin1())));
            ui->gridLayout_2->addWidget(lineEdit_160,3,19);

            lineEdit_161->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[160].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_161,0,0);

            lineEdit_162->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[161].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_162,0,1);

            lineEdit_163->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[162].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_163,0,2);

            lineEdit_164->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[163].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_164,0,3);

            lineEdit_165->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[164].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_165,0,4);

            lineEdit_166->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[165].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_166,0,5);

            lineEdit_167->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[166].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_167,0,6);

            lineEdit_168->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[167].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_168,0,7);

            lineEdit_169->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[168].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_169,0,8);

            lineEdit_170->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[169].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_170,0,9);

            lineEdit_171->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[170].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_171,0,10);

            lineEdit_172->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[171].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_172,0,11);

            lineEdit_173->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[172].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_173,0,12);

            lineEdit_174->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[173].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_174,0,13);

            lineEdit_175->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[174].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_175,0,14);

            lineEdit_176->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[175].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_176,0,15);

            lineEdit_177->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[176].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_177,0,16);

            lineEdit_178->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[177].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_178,0,17);

            lineEdit_179->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[178].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_179,0,18);

            lineEdit_180->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[179].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_180,0,19);

            lineEdit_181->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[180].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_181,2,0);

            lineEdit_182->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[181].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_182,2,1);

            lineEdit_183->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[182].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_183,2,2);

            lineEdit_184->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[183].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_184,2,3);

            lineEdit_185->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[184].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_185,2,4);

            lineEdit_186->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[185].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_186,2,5);

            lineEdit_187->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[186].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_187,2,6);

            lineEdit_188->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[187].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_188,2,7);

            lineEdit_189->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[188].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_189,2,8);

            lineEdit_190->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[189].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_190,2,9);

            lineEdit_191->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[190].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_191,2,10);

            lineEdit_192->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[191].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_192,2,11);

            lineEdit_193->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[192].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_193,2,12);

            lineEdit_194->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[193].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_194,2,13);

            lineEdit_195->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[194].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_195,2,14);

            lineEdit_196->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[195].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_196,2,15);

            lineEdit_197->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[196].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_197,2,16);

            lineEdit_198->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[197].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_198,2,17);

            lineEdit_199->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[198].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_199,2,18);

            lineEdit_200->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[199].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_200,2,19);

            lineEdit_201->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[200].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_201,1,0);

            lineEdit_202->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[201].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_202,1,1);

            lineEdit_203->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[202].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_203,1,2);

            lineEdit_204->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[203].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_204,1,3);

            lineEdit_205->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[204].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_205,1,4);

            lineEdit_206->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[205].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_206,1,5);

            lineEdit_207->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[206].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_207,1,6);

            lineEdit_208->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[207].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_208,1,7);

            lineEdit_209->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[208].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_209,1,8);

            lineEdit_210->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[209].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_210,1,9);

            lineEdit_211->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[210].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_211,1,10);

            lineEdit_212->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[211].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_212,1,11);

            lineEdit_213->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[212].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_213,1,12);

            lineEdit_214->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[213].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_214,1,13);

            lineEdit_215->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[214].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_215,1,14);

            lineEdit_216->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[215].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_216,1,15);

            lineEdit_217->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[216].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_217,1,16);

            lineEdit_218->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[217].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_218,1,17);

            lineEdit_219->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[218].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_219,1,18);

            lineEdit_220->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[219].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_220,1,19);

            lineEdit_221->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[220].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_221,3,0);

            lineEdit_222->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[221].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_222,3,1);

            lineEdit_223->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[222].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_223,3,2);

            lineEdit_224->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[223].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_224,3,3);

            lineEdit_225->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[224].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_225,3,4);

            lineEdit_226->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[225].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_226,3,5);

            lineEdit_227->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[226].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_227,3,6);

            lineEdit_228->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[227].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_228,3,7);

            lineEdit_229->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[228].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_229,3,8);

            lineEdit_230->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[229].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_230,3,9);

            lineEdit_231->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[230].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_231,3,10);

            lineEdit_232->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[231].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_232,3,11);

            lineEdit_233->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[232].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_233,3,12);

            lineEdit_234->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[233].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_234,3,13);

            lineEdit_235->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[234].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_235,3,14);

            lineEdit_236->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[235].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_236,3,15);

            lineEdit_237->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[236].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_237,3,16);

            lineEdit_238->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[237].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_238,3,17);

            lineEdit_239->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[238].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_239,3,18);

            lineEdit_240->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[239].toLatin1())));
            ui->gridLayout_3->addWidget(lineEdit_240,3,19);

            lineEdit_241->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[240].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_241,0,0);

            lineEdit_242->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[241].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_242,0,1);

            lineEdit_243->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[242].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_243,0,2);

            lineEdit_244->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[243].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_244,0,3);

            lineEdit_245->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[244].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_245,0,4);

            lineEdit_246->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[245].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_246,0,5);

            lineEdit_247->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[246].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_247,0,6);

            lineEdit_248->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[247].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_248,0,7);

            lineEdit_249->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[248].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_249,0,8);

            lineEdit_250->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[249].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_250,0,9);

            lineEdit_251->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[250].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_251,0,10);

            lineEdit_252->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[251].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_252,0,11);

            lineEdit_253->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[252].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_253,0,12);

            lineEdit_254->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[253].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_254,0,13);

            lineEdit_255->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[254].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_255,0,14);

            lineEdit_256->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[255].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_256,0,15);

            lineEdit_257->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[256].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_257,0,16);

            lineEdit_258->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[257].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_258,0,17);

            lineEdit_259->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[258].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_259,0,18);

            lineEdit_260->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[259].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_260,0,19);

            lineEdit_261->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[260].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_261,2,0);

            lineEdit_262->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[261].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_262,2,1);

            lineEdit_263->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[262].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_263,2,2);

            lineEdit_264->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[263].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_264,2,3);

            lineEdit_265->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[264].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_265,2,4);

            lineEdit_266->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[265].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_266,2,5);

            lineEdit_267->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[266].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_267,2,6);

            lineEdit_268->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[267].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_268,2,7);

            lineEdit_269->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[268].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_269,2,8);

            lineEdit_270->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[269].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_270,2,9);

            lineEdit_271->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[270].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_271,2,10);

            lineEdit_272->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[271].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_272,2,11);

            lineEdit_273->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[272].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_273,2,12);

            lineEdit_274->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[273].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_274,2,13);

            lineEdit_275->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[274].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_275,2,14);

            lineEdit_276->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[275].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_276,2,15);

            lineEdit_277->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[276].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_277,2,16);

            lineEdit_278->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[277].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_278,2,17);

            lineEdit_279->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[278].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_279,2,18);

            lineEdit_280->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[279].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_280,2,19);

            lineEdit_281->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[280].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_281,1,0);

            lineEdit_282->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[281].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_282,1,1);

            lineEdit_283->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[282].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_283,1,2);

            lineEdit_284->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[283].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_284,1,3);

            lineEdit_285->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[284].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_285,1,4);

            lineEdit_286->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[285].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_286,1,5);

            lineEdit_287->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[286].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_287,1,6);

            lineEdit_288->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[287].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_288,1,7);

            lineEdit_289->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[288].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_289,1,8);

            lineEdit_290->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[289].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_290,1,9);

            lineEdit_291->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[290].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_291,1,10);

            lineEdit_292->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[291].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_292,1,11);

            lineEdit_293->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[292].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_293,1,12);

            lineEdit_294->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[293].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_294,1,13);

            lineEdit_295->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[294].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_295,1,14);

            lineEdit_296->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[295].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_296,1,15);

            lineEdit_297->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[296].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_297,1,16);

            lineEdit_298->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[297].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_298,1,17);

            lineEdit_299->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[298].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_299,1,18);

            lineEdit_300->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[299].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_300,1,19);

            lineEdit_301->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[300].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_301,3,0);

            lineEdit_302->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[301].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_302,3,1);

            lineEdit_303->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[302].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_303,3,2);

            lineEdit_304->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[303].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_304,3,3);

            lineEdit_305->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[304].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_305,3,4);

            lineEdit_306->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[305].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_306,3,5);

            lineEdit_307->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[306].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_307,3,6);

            lineEdit_308->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[307].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_308,3,7);

            lineEdit_309->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[308].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_309,3,8);

            lineEdit_310->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[309].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_310,3,9);

            lineEdit_311->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[310].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_311,3,10);

            lineEdit_312->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[311].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_312,3,11);

            lineEdit_313->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[312].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_313,3,12);

            lineEdit_314->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[313].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_314,3,13);

            lineEdit_315->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[314].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_315,3,14);

            lineEdit_316->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[315].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_316,3,15);

            lineEdit_317->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[316].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_317,3,16);

            lineEdit_318->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[317].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_318,3,17);

            lineEdit_319->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[318].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_319,3,18);

            lineEdit_320->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[319].toLatin1())));
            ui->gridLayout_4->addWidget(lineEdit_320,3,19);

            lineEdit_321->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[320].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_321,0,0);

            lineEdit_322->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[321].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_322,0,1);

            lineEdit_323->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[322].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_323,0,2);

            lineEdit_324->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[323].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_324,0,3);

            lineEdit_325->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[324].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_325,0,4);

            lineEdit_326->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[325].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_326,0,5);

            lineEdit_327->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[326].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_327,0,6);

            lineEdit_328->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[327].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_328,0,7);

            lineEdit_329->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[328].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_329,0,8);

            lineEdit_330->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[329].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_330,0,9);

            lineEdit_331->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[330].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_331,0,10);

            lineEdit_332->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[331].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_332,0,11);

            lineEdit_333->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[332].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_333,0,12);

            lineEdit_334->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[333].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_334,0,13);

            lineEdit_335->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[334].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_335,0,14);

            lineEdit_336->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[335].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_336,0,15);

            lineEdit_337->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[336].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_337,0,16);

            lineEdit_338->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[337].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_338,0,17);

            lineEdit_339->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[338].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_339,0,18);

            lineEdit_340->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[339].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_340,0,19);

            lineEdit_341->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[340].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_341,2,0);

            lineEdit_342->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[341].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_342,2,1);

            lineEdit_343->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[342].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_343,2,2);

            lineEdit_344->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[343].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_344,2,3);

            lineEdit_345->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[344].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_345,2,4);

            lineEdit_346->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[345].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_346,2,5);

            lineEdit_347->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[346].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_347,2,6);

            lineEdit_348->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[347].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_348,2,7);

            lineEdit_349->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[348].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_349,2,8);

            lineEdit_350->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[349].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_350,2,9);

            lineEdit_351->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[350].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_351,2,10);

            lineEdit_352->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[351].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_352,2,11);

            lineEdit_353->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[352].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_353,2,12);

            lineEdit_354->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[353].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_354,2,13);

            lineEdit_355->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[354].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_355,2,14);

            lineEdit_356->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[355].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_356,2,15);

            lineEdit_357->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[356].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_357,2,16);

            lineEdit_358->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[357].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_358,2,17);

            lineEdit_359->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[358].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_359,2,18);

            lineEdit_360->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[359].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_360,2,19);

            lineEdit_361->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[360].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_361,1,0);

            lineEdit_362->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[361].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_362,1,1);

            lineEdit_363->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[362].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_363,1,2);

            lineEdit_364->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[363].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_364,1,3);

            lineEdit_365->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[364].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_365,1,4);

            lineEdit_366->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[365].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_366,1,5);

            lineEdit_367->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[366].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_367,1,6);

            lineEdit_368->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[367].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_368,1,7);

            lineEdit_369->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[368].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_369,1,8);

            lineEdit_370->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[369].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_370,1,9);

            lineEdit_371->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[370].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_371,1,10);

            lineEdit_372->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[371].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_372,1,11);

            lineEdit_373->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[372].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_373,1,12);

            lineEdit_374->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[373].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_374,1,13);

            lineEdit_375->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[374].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_375,1,14);

            lineEdit_376->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[375].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_376,1,15);

            lineEdit_377->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[376].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_377,1,16);

            lineEdit_378->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[377].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_378,1,17);

            lineEdit_379->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[378].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_379,1,18);

            lineEdit_380->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[379].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_380,1,19);

            lineEdit_381->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[380].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_381,3,0);

            lineEdit_382->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[381].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_382,3,1);

            lineEdit_383->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[382].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_383,3,2);

            lineEdit_384->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[383].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_384,3,3);

            lineEdit_385->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[384].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_385,3,4);

            lineEdit_386->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[385].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_386,3,5);

            lineEdit_387->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[386].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_387,3,6);

            lineEdit_388->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[387].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_388,3,7);

            lineEdit_389->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[388].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_389,3,8);

            lineEdit_390->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[389].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_390,3,9);

            lineEdit_391->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[390].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_391,3,10);

            lineEdit_392->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[391].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_392,3,11);

            lineEdit_393->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[392].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_393,3,12);

            lineEdit_394->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[393].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_394,3,13);

            lineEdit_395->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[394].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_395,3,14);

            lineEdit_396->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[395].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_396,3,15);

            lineEdit_397->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[396].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_397,3,16);

            lineEdit_398->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[397].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_398,3,17);

            lineEdit_399->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[398].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_399,3,18);

            lineEdit_400->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[399].toLatin1())));
            ui->gridLayout_5->addWidget(lineEdit_400,3,19);

            lineEdit_401->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[400].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_401,0,0);

            lineEdit_402->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[401].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_402,0,1);

            lineEdit_403->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[402].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_403,0,2);

            lineEdit_404->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[403].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_404,0,3);

            lineEdit_405->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[404].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_405,0,4);

            lineEdit_406->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[405].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_406,0,5);

            lineEdit_407->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[406].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_407,0,6);

            lineEdit_408->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[407].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_408,0,7);

            lineEdit_409->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[408].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_409,0,8);

            lineEdit_410->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[409].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_410,0,9);

            lineEdit_411->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[410].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_411,0,10);

            lineEdit_412->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[411].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_412,0,11);

            lineEdit_413->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[412].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_413,0,12);

            lineEdit_414->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[413].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_414,0,13);

            lineEdit_415->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[414].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_415,0,14);

            lineEdit_416->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[415].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_416,0,15);

            lineEdit_417->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[416].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_417,0,16);

            lineEdit_418->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[417].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_418,0,17);

            lineEdit_419->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[418].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_419,0,18);

            lineEdit_420->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[419].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_420,0,19);

            lineEdit_421->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[420].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_421,2,0);

            lineEdit_422->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[421].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_422,2,1);

            lineEdit_423->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[422].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_423,2,2);

            lineEdit_424->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[423].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_424,2,3);

            lineEdit_425->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[424].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_425,2,4);

            lineEdit_426->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[425].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_426,2,5);

            lineEdit_427->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[426].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_427,2,6);

            lineEdit_428->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[427].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_428,2,7);

            lineEdit_429->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[428].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_429,2,8);

            lineEdit_430->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[429].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_430,2,9);

            lineEdit_431->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[430].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_431,2,10);

            lineEdit_432->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[431].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_432,2,11);

            lineEdit_433->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[432].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_433,2,12);

            lineEdit_434->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[433].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_434,2,13);

            lineEdit_435->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[434].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_435,2,14);

            lineEdit_436->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[435].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_436,2,15);

            lineEdit_437->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[436].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_437,2,16);

            lineEdit_438->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[437].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_438,2,17);

            lineEdit_439->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[438].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_439,2,18);

            lineEdit_440->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[439].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_440,2,19);

            lineEdit_441->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[440].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_441,1,0);

            lineEdit_442->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[441].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_442,1,1);

            lineEdit_443->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[442].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_443,1,2);

            lineEdit_444->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[443].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_444,1,3);

            lineEdit_445->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[444].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_445,1,4);

            lineEdit_446->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[445].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_446,1,5);

            lineEdit_447->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[446].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_447,1,6);

            lineEdit_448->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[447].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_448,1,7);

            lineEdit_449->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[448].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_449,1,8);

            lineEdit_450->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[449].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_450,1,9);

            lineEdit_451->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[450].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_451,1,10);

            lineEdit_452->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[451].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_452,1,11);

            lineEdit_453->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[452].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_453,1,12);

            lineEdit_454->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[453].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_454,1,13);

            lineEdit_455->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[454].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_455,1,14);

            lineEdit_456->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[455].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_456,1,15);

            lineEdit_457->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[456].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_457,1,16);

            lineEdit_458->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[457].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_458,1,17);

            lineEdit_459->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[458].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_459,1,18);

            lineEdit_460->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[459].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_460,1,19);

            lineEdit_461->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[460].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_461,3,0);

            lineEdit_462->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[461].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_462,3,1);

            lineEdit_463->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[462].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_463,3,2);

            lineEdit_464->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[463].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_464,3,3);

            lineEdit_465->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[464].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_465,3,4);

            lineEdit_466->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[465].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_466,3,5);

            lineEdit_467->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[466].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_467,3,6);

            lineEdit_468->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[467].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_468,3,7);

            lineEdit_469->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[468].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_469,3,8);

            lineEdit_470->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[469].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_470,3,9);

            lineEdit_471->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[470].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_471,3,10);

            lineEdit_472->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[471].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_472,3,11);

            lineEdit_473->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[472].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_473,3,12);

            lineEdit_474->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[473].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_474,3,13);

            lineEdit_475->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[474].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_475,3,14);

            lineEdit_476->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[475].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_476,3,15);

            lineEdit_477->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[476].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_477,3,16);

            lineEdit_478->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[477].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_478,3,17);

            lineEdit_479->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[478].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_479,3,18);

            lineEdit_480->setText(QString::fromLocal8Bit(QByteArray::fromHex(memory_initialization_vector[479].toLatin1())));
            ui->gridLayout_6->addWidget(lineEdit_480,3,19);

    ui->pushButton->setEnabled(1);
    ui->pushButton_4->setEnabled(1);

}


void TEXT2BRAM::on_pushButton_pressed()
{

    QString znaky;

    lineEdit_1->text() != "" ? znaky += lineEdit_1->text() : znaky += " ";
    lineEdit_2->text() != "" ? znaky += lineEdit_2->text() : znaky += " ";
    lineEdit_3->text() != "" ? znaky += lineEdit_3->text() : znaky += " ";
    lineEdit_4->text() != "" ? znaky += lineEdit_4->text() : znaky += " ";
    lineEdit_5->text() != "" ? znaky += lineEdit_5->text() : znaky += " ";
    lineEdit_6->text() != "" ? znaky += lineEdit_6->text() : znaky += " ";
    lineEdit_7->text() != "" ? znaky += lineEdit_7->text() : znaky += " ";
    lineEdit_8->text() != "" ? znaky += lineEdit_8->text() : znaky += " ";
    lineEdit_9->text() != "" ? znaky += lineEdit_9->text() : znaky += " ";
    lineEdit_10->text() != "" ? znaky += lineEdit_10->text() : znaky += " ";
    lineEdit_11->text() != "" ? znaky += lineEdit_11->text() : znaky += " ";
    lineEdit_12->text() != "" ? znaky += lineEdit_12->text() : znaky += " ";
    lineEdit_13->text() != "" ? znaky += lineEdit_13->text() : znaky += " ";
    lineEdit_14->text() != "" ? znaky += lineEdit_14->text() : znaky += " ";
    lineEdit_15->text() != "" ? znaky += lineEdit_15->text() : znaky += " ";
    lineEdit_16->text() != "" ? znaky += lineEdit_16->text() : znaky += " ";
    lineEdit_17->text() != "" ? znaky += lineEdit_17->text() : znaky += " ";
    lineEdit_18->text() != "" ? znaky += lineEdit_18->text() : znaky += " ";
    lineEdit_19->text() != "" ? znaky += lineEdit_19->text() : znaky += " ";
    lineEdit_20->text() != "" ? znaky += lineEdit_20->text() : znaky += " ";
    lineEdit_21->text() != "" ? znaky += lineEdit_21->text() : znaky += " ";
    lineEdit_22->text() != "" ? znaky += lineEdit_22->text() : znaky += " ";
    lineEdit_23->text() != "" ? znaky += lineEdit_23->text() : znaky += " ";
    lineEdit_24->text() != "" ? znaky += lineEdit_24->text() : znaky += " ";
    lineEdit_25->text() != "" ? znaky += lineEdit_25->text() : znaky += " ";
    lineEdit_26->text() != "" ? znaky += lineEdit_26->text() : znaky += " ";
    lineEdit_27->text() != "" ? znaky += lineEdit_27->text() : znaky += " ";
    lineEdit_28->text() != "" ? znaky += lineEdit_28->text() : znaky += " ";
    lineEdit_29->text() != "" ? znaky += lineEdit_29->text() : znaky += " ";
    lineEdit_30->text() != "" ? znaky += lineEdit_30->text() : znaky += " ";
    lineEdit_31->text() != "" ? znaky += lineEdit_31->text() : znaky += " ";
    lineEdit_32->text() != "" ? znaky += lineEdit_32->text() : znaky += " ";
    lineEdit_33->text() != "" ? znaky += lineEdit_33->text() : znaky += " ";
    lineEdit_34->text() != "" ? znaky += lineEdit_34->text() : znaky += " ";
    lineEdit_35->text() != "" ? znaky += lineEdit_35->text() : znaky += " ";
    lineEdit_36->text() != "" ? znaky += lineEdit_36->text() : znaky += " ";
    lineEdit_37->text() != "" ? znaky += lineEdit_37->text() : znaky += " ";
    lineEdit_38->text() != "" ? znaky += lineEdit_38->text() : znaky += " ";
    lineEdit_39->text() != "" ? znaky += lineEdit_39->text() : znaky += " ";
    lineEdit_40->text() != "" ? znaky += lineEdit_40->text() : znaky += " ";
    lineEdit_41->text() != "" ? znaky += lineEdit_41->text() : znaky += " ";
    lineEdit_42->text() != "" ? znaky += lineEdit_42->text() : znaky += " ";
    lineEdit_43->text() != "" ? znaky += lineEdit_43->text() : znaky += " ";
    lineEdit_44->text() != "" ? znaky += lineEdit_44->text() : znaky += " ";
    lineEdit_45->text() != "" ? znaky += lineEdit_45->text() : znaky += " ";
    lineEdit_46->text() != "" ? znaky += lineEdit_46->text() : znaky += " ";
    lineEdit_47->text() != "" ? znaky += lineEdit_47->text() : znaky += " ";
    lineEdit_48->text() != "" ? znaky += lineEdit_48->text() : znaky += " ";
    lineEdit_49->text() != "" ? znaky += lineEdit_49->text() : znaky += " ";
    lineEdit_50->text() != "" ? znaky += lineEdit_50->text() : znaky += " ";
    lineEdit_51->text() != "" ? znaky += lineEdit_51->text() : znaky += " ";
    lineEdit_52->text() != "" ? znaky += lineEdit_52->text() : znaky += " ";
    lineEdit_53->text() != "" ? znaky += lineEdit_53->text() : znaky += " ";
    lineEdit_54->text() != "" ? znaky += lineEdit_54->text() : znaky += " ";
    lineEdit_55->text() != "" ? znaky += lineEdit_55->text() : znaky += " ";
    lineEdit_56->text() != "" ? znaky += lineEdit_56->text() : znaky += " ";
    lineEdit_57->text() != "" ? znaky += lineEdit_57->text() : znaky += " ";
    lineEdit_58->text() != "" ? znaky += lineEdit_58->text() : znaky += " ";
    lineEdit_59->text() != "" ? znaky += lineEdit_59->text() : znaky += " ";
    lineEdit_60->text() != "" ? znaky += lineEdit_60->text() : znaky += " ";
    lineEdit_61->text() != "" ? znaky += lineEdit_61->text() : znaky += " ";
    lineEdit_62->text() != "" ? znaky += lineEdit_62->text() : znaky += " ";
    lineEdit_63->text() != "" ? znaky += lineEdit_63->text() : znaky += " ";
    lineEdit_64->text() != "" ? znaky += lineEdit_64->text() : znaky += " ";
    lineEdit_65->text() != "" ? znaky += lineEdit_65->text() : znaky += " ";
    lineEdit_66->text() != "" ? znaky += lineEdit_66->text() : znaky += " ";
    lineEdit_67->text() != "" ? znaky += lineEdit_67->text() : znaky += " ";
    lineEdit_68->text() != "" ? znaky += lineEdit_68->text() : znaky += " ";
    lineEdit_69->text() != "" ? znaky += lineEdit_69->text() : znaky += " ";
    lineEdit_70->text() != "" ? znaky += lineEdit_70->text() : znaky += " ";
    lineEdit_71->text() != "" ? znaky += lineEdit_71->text() : znaky += " ";
    lineEdit_72->text() != "" ? znaky += lineEdit_72->text() : znaky += " ";
    lineEdit_73->text() != "" ? znaky += lineEdit_73->text() : znaky += " ";
    lineEdit_74->text() != "" ? znaky += lineEdit_74->text() : znaky += " ";
    lineEdit_75->text() != "" ? znaky += lineEdit_75->text() : znaky += " ";
    lineEdit_76->text() != "" ? znaky += lineEdit_76->text() : znaky += " ";
    lineEdit_77->text() != "" ? znaky += lineEdit_77->text() : znaky += " ";
    lineEdit_78->text() != "" ? znaky += lineEdit_78->text() : znaky += " ";
    lineEdit_79->text() != "" ? znaky += lineEdit_79->text() : znaky += " ";
    lineEdit_80->text() != "" ? znaky += lineEdit_80->text() : znaky += " ";
    lineEdit_81->text() != "" ? znaky += lineEdit_81->text() : znaky += " ";
    lineEdit_82->text() != "" ? znaky += lineEdit_82->text() : znaky += " ";
    lineEdit_83->text() != "" ? znaky += lineEdit_83->text() : znaky += " ";
    lineEdit_84->text() != "" ? znaky += lineEdit_84->text() : znaky += " ";
    lineEdit_85->text() != "" ? znaky += lineEdit_85->text() : znaky += " ";
    lineEdit_86->text() != "" ? znaky += lineEdit_86->text() : znaky += " ";
    lineEdit_87->text() != "" ? znaky += lineEdit_87->text() : znaky += " ";
    lineEdit_88->text() != "" ? znaky += lineEdit_88->text() : znaky += " ";
    lineEdit_89->text() != "" ? znaky += lineEdit_89->text() : znaky += " ";
    lineEdit_90->text() != "" ? znaky += lineEdit_90->text() : znaky += " ";
    lineEdit_91->text() != "" ? znaky += lineEdit_91->text() : znaky += " ";
    lineEdit_92->text() != "" ? znaky += lineEdit_92->text() : znaky += " ";
    lineEdit_93->text() != "" ? znaky += lineEdit_93->text() : znaky += " ";
    lineEdit_94->text() != "" ? znaky += lineEdit_94->text() : znaky += " ";
    lineEdit_95->text() != "" ? znaky += lineEdit_95->text() : znaky += " ";
    lineEdit_96->text() != "" ? znaky += lineEdit_96->text() : znaky += " ";
    lineEdit_97->text() != "" ? znaky += lineEdit_97->text() : znaky += " ";
    lineEdit_98->text() != "" ? znaky += lineEdit_98->text() : znaky += " ";
    lineEdit_99->text() != "" ? znaky += lineEdit_99->text() : znaky += " ";
    lineEdit_100->text() != "" ? znaky += lineEdit_100->text() : znaky += " ";
    lineEdit_101->text() != "" ? znaky += lineEdit_101->text() : znaky += " ";
    lineEdit_102->text() != "" ? znaky += lineEdit_102->text() : znaky += " ";
    lineEdit_103->text() != "" ? znaky += lineEdit_103->text() : znaky += " ";
    lineEdit_104->text() != "" ? znaky += lineEdit_104->text() : znaky += " ";
    lineEdit_105->text() != "" ? znaky += lineEdit_105->text() : znaky += " ";
    lineEdit_106->text() != "" ? znaky += lineEdit_106->text() : znaky += " ";
    lineEdit_107->text() != "" ? znaky += lineEdit_107->text() : znaky += " ";
    lineEdit_108->text() != "" ? znaky += lineEdit_108->text() : znaky += " ";
    lineEdit_109->text() != "" ? znaky += lineEdit_109->text() : znaky += " ";
    lineEdit_110->text() != "" ? znaky += lineEdit_110->text() : znaky += " ";
    lineEdit_111->text() != "" ? znaky += lineEdit_111->text() : znaky += " ";
    lineEdit_112->text() != "" ? znaky += lineEdit_112->text() : znaky += " ";
    lineEdit_113->text() != "" ? znaky += lineEdit_113->text() : znaky += " ";
    lineEdit_114->text() != "" ? znaky += lineEdit_114->text() : znaky += " ";
    lineEdit_115->text() != "" ? znaky += lineEdit_115->text() : znaky += " ";
    lineEdit_116->text() != "" ? znaky += lineEdit_116->text() : znaky += " ";
    lineEdit_117->text() != "" ? znaky += lineEdit_117->text() : znaky += " ";
    lineEdit_118->text() != "" ? znaky += lineEdit_118->text() : znaky += " ";
    lineEdit_119->text() != "" ? znaky += lineEdit_119->text() : znaky += " ";
    lineEdit_120->text() != "" ? znaky += lineEdit_120->text() : znaky += " ";
    lineEdit_121->text() != "" ? znaky += lineEdit_121->text() : znaky += " ";
    lineEdit_122->text() != "" ? znaky += lineEdit_122->text() : znaky += " ";
    lineEdit_123->text() != "" ? znaky += lineEdit_123->text() : znaky += " ";
    lineEdit_124->text() != "" ? znaky += lineEdit_124->text() : znaky += " ";
    lineEdit_125->text() != "" ? znaky += lineEdit_125->text() : znaky += " ";
    lineEdit_126->text() != "" ? znaky += lineEdit_126->text() : znaky += " ";
    lineEdit_127->text() != "" ? znaky += lineEdit_127->text() : znaky += " ";
    lineEdit_128->text() != "" ? znaky += lineEdit_128->text() : znaky += " ";
    lineEdit_129->text() != "" ? znaky += lineEdit_129->text() : znaky += " ";
    lineEdit_130->text() != "" ? znaky += lineEdit_130->text() : znaky += " ";
    lineEdit_131->text() != "" ? znaky += lineEdit_131->text() : znaky += " ";
    lineEdit_132->text() != "" ? znaky += lineEdit_132->text() : znaky += " ";
    lineEdit_133->text() != "" ? znaky += lineEdit_133->text() : znaky += " ";
    lineEdit_134->text() != "" ? znaky += lineEdit_134->text() : znaky += " ";
    lineEdit_135->text() != "" ? znaky += lineEdit_135->text() : znaky += " ";
    lineEdit_136->text() != "" ? znaky += lineEdit_136->text() : znaky += " ";
    lineEdit_137->text() != "" ? znaky += lineEdit_137->text() : znaky += " ";
    lineEdit_138->text() != "" ? znaky += lineEdit_138->text() : znaky += " ";
    lineEdit_139->text() != "" ? znaky += lineEdit_139->text() : znaky += " ";
    lineEdit_140->text() != "" ? znaky += lineEdit_140->text() : znaky += " ";
    lineEdit_141->text() != "" ? znaky += lineEdit_141->text() : znaky += " ";
    lineEdit_142->text() != "" ? znaky += lineEdit_142->text() : znaky += " ";
    lineEdit_143->text() != "" ? znaky += lineEdit_143->text() : znaky += " ";
    lineEdit_144->text() != "" ? znaky += lineEdit_144->text() : znaky += " ";
    lineEdit_145->text() != "" ? znaky += lineEdit_145->text() : znaky += " ";
    lineEdit_146->text() != "" ? znaky += lineEdit_146->text() : znaky += " ";
    lineEdit_147->text() != "" ? znaky += lineEdit_147->text() : znaky += " ";
    lineEdit_148->text() != "" ? znaky += lineEdit_148->text() : znaky += " ";
    lineEdit_149->text() != "" ? znaky += lineEdit_149->text() : znaky += " ";
    lineEdit_150->text() != "" ? znaky += lineEdit_150->text() : znaky += " ";
    lineEdit_151->text() != "" ? znaky += lineEdit_151->text() : znaky += " ";
    lineEdit_152->text() != "" ? znaky += lineEdit_152->text() : znaky += " ";
    lineEdit_153->text() != "" ? znaky += lineEdit_153->text() : znaky += " ";
    lineEdit_154->text() != "" ? znaky += lineEdit_154->text() : znaky += " ";
    lineEdit_155->text() != "" ? znaky += lineEdit_155->text() : znaky += " ";
    lineEdit_156->text() != "" ? znaky += lineEdit_156->text() : znaky += " ";
    lineEdit_157->text() != "" ? znaky += lineEdit_157->text() : znaky += " ";
    lineEdit_158->text() != "" ? znaky += lineEdit_158->text() : znaky += " ";
    lineEdit_159->text() != "" ? znaky += lineEdit_159->text() : znaky += " ";
    lineEdit_160->text() != "" ? znaky += lineEdit_160->text() : znaky += " ";
    lineEdit_161->text() != "" ? znaky += lineEdit_161->text() : znaky += " ";
    lineEdit_162->text() != "" ? znaky += lineEdit_162->text() : znaky += " ";
    lineEdit_163->text() != "" ? znaky += lineEdit_163->text() : znaky += " ";
    lineEdit_164->text() != "" ? znaky += lineEdit_164->text() : znaky += " ";
    lineEdit_165->text() != "" ? znaky += lineEdit_165->text() : znaky += " ";
    lineEdit_166->text() != "" ? znaky += lineEdit_166->text() : znaky += " ";
    lineEdit_167->text() != "" ? znaky += lineEdit_167->text() : znaky += " ";
    lineEdit_168->text() != "" ? znaky += lineEdit_168->text() : znaky += " ";
    lineEdit_169->text() != "" ? znaky += lineEdit_169->text() : znaky += " ";
    lineEdit_170->text() != "" ? znaky += lineEdit_170->text() : znaky += " ";
    lineEdit_171->text() != "" ? znaky += lineEdit_171->text() : znaky += " ";
    lineEdit_172->text() != "" ? znaky += lineEdit_172->text() : znaky += " ";
    lineEdit_173->text() != "" ? znaky += lineEdit_173->text() : znaky += " ";
    lineEdit_174->text() != "" ? znaky += lineEdit_174->text() : znaky += " ";
    lineEdit_175->text() != "" ? znaky += lineEdit_175->text() : znaky += " ";
    lineEdit_176->text() != "" ? znaky += lineEdit_176->text() : znaky += " ";
    lineEdit_177->text() != "" ? znaky += lineEdit_177->text() : znaky += " ";
    lineEdit_178->text() != "" ? znaky += lineEdit_178->text() : znaky += " ";
    lineEdit_179->text() != "" ? znaky += lineEdit_179->text() : znaky += " ";
    lineEdit_180->text() != "" ? znaky += lineEdit_180->text() : znaky += " ";
    lineEdit_181->text() != "" ? znaky += lineEdit_181->text() : znaky += " ";
    lineEdit_182->text() != "" ? znaky += lineEdit_182->text() : znaky += " ";
    lineEdit_183->text() != "" ? znaky += lineEdit_183->text() : znaky += " ";
    lineEdit_184->text() != "" ? znaky += lineEdit_184->text() : znaky += " ";
    lineEdit_185->text() != "" ? znaky += lineEdit_185->text() : znaky += " ";
    lineEdit_186->text() != "" ? znaky += lineEdit_186->text() : znaky += " ";
    lineEdit_187->text() != "" ? znaky += lineEdit_187->text() : znaky += " ";
    lineEdit_188->text() != "" ? znaky += lineEdit_188->text() : znaky += " ";
    lineEdit_189->text() != "" ? znaky += lineEdit_189->text() : znaky += " ";
    lineEdit_190->text() != "" ? znaky += lineEdit_190->text() : znaky += " ";
    lineEdit_191->text() != "" ? znaky += lineEdit_191->text() : znaky += " ";
    lineEdit_192->text() != "" ? znaky += lineEdit_192->text() : znaky += " ";
    lineEdit_193->text() != "" ? znaky += lineEdit_193->text() : znaky += " ";
    lineEdit_194->text() != "" ? znaky += lineEdit_194->text() : znaky += " ";
    lineEdit_195->text() != "" ? znaky += lineEdit_195->text() : znaky += " ";
    lineEdit_196->text() != "" ? znaky += lineEdit_196->text() : znaky += " ";
    lineEdit_197->text() != "" ? znaky += lineEdit_197->text() : znaky += " ";
    lineEdit_198->text() != "" ? znaky += lineEdit_198->text() : znaky += " ";
    lineEdit_199->text() != "" ? znaky += lineEdit_199->text() : znaky += " ";
    lineEdit_200->text() != "" ? znaky += lineEdit_200->text() : znaky += " ";
    lineEdit_201->text() != "" ? znaky += lineEdit_201->text() : znaky += " ";
    lineEdit_202->text() != "" ? znaky += lineEdit_202->text() : znaky += " ";
    lineEdit_203->text() != "" ? znaky += lineEdit_203->text() : znaky += " ";
    lineEdit_204->text() != "" ? znaky += lineEdit_204->text() : znaky += " ";
    lineEdit_205->text() != "" ? znaky += lineEdit_205->text() : znaky += " ";
    lineEdit_206->text() != "" ? znaky += lineEdit_206->text() : znaky += " ";
    lineEdit_207->text() != "" ? znaky += lineEdit_207->text() : znaky += " ";
    lineEdit_208->text() != "" ? znaky += lineEdit_208->text() : znaky += " ";
    lineEdit_209->text() != "" ? znaky += lineEdit_209->text() : znaky += " ";
    lineEdit_210->text() != "" ? znaky += lineEdit_210->text() : znaky += " ";
    lineEdit_211->text() != "" ? znaky += lineEdit_211->text() : znaky += " ";
    lineEdit_212->text() != "" ? znaky += lineEdit_212->text() : znaky += " ";
    lineEdit_213->text() != "" ? znaky += lineEdit_213->text() : znaky += " ";
    lineEdit_214->text() != "" ? znaky += lineEdit_214->text() : znaky += " ";
    lineEdit_215->text() != "" ? znaky += lineEdit_215->text() : znaky += " ";
    lineEdit_216->text() != "" ? znaky += lineEdit_216->text() : znaky += " ";
    lineEdit_217->text() != "" ? znaky += lineEdit_217->text() : znaky += " ";
    lineEdit_218->text() != "" ? znaky += lineEdit_218->text() : znaky += " ";
    lineEdit_219->text() != "" ? znaky += lineEdit_219->text() : znaky += " ";
    lineEdit_220->text() != "" ? znaky += lineEdit_220->text() : znaky += " ";
    lineEdit_221->text() != "" ? znaky += lineEdit_221->text() : znaky += " ";
    lineEdit_222->text() != "" ? znaky += lineEdit_222->text() : znaky += " ";
    lineEdit_223->text() != "" ? znaky += lineEdit_223->text() : znaky += " ";
    lineEdit_224->text() != "" ? znaky += lineEdit_224->text() : znaky += " ";
    lineEdit_225->text() != "" ? znaky += lineEdit_225->text() : znaky += " ";
    lineEdit_226->text() != "" ? znaky += lineEdit_226->text() : znaky += " ";
    lineEdit_227->text() != "" ? znaky += lineEdit_227->text() : znaky += " ";
    lineEdit_228->text() != "" ? znaky += lineEdit_228->text() : znaky += " ";
    lineEdit_229->text() != "" ? znaky += lineEdit_229->text() : znaky += " ";
    lineEdit_230->text() != "" ? znaky += lineEdit_230->text() : znaky += " ";
    lineEdit_231->text() != "" ? znaky += lineEdit_231->text() : znaky += " ";
    lineEdit_232->text() != "" ? znaky += lineEdit_232->text() : znaky += " ";
    lineEdit_233->text() != "" ? znaky += lineEdit_233->text() : znaky += " ";
    lineEdit_234->text() != "" ? znaky += lineEdit_234->text() : znaky += " ";
    lineEdit_235->text() != "" ? znaky += lineEdit_235->text() : znaky += " ";
    lineEdit_236->text() != "" ? znaky += lineEdit_236->text() : znaky += " ";
    lineEdit_237->text() != "" ? znaky += lineEdit_237->text() : znaky += " ";
    lineEdit_238->text() != "" ? znaky += lineEdit_238->text() : znaky += " ";
    lineEdit_239->text() != "" ? znaky += lineEdit_239->text() : znaky += " ";
    lineEdit_240->text() != "" ? znaky += lineEdit_240->text() : znaky += " ";
    lineEdit_241->text() != "" ? znaky += lineEdit_241->text() : znaky += " ";
    lineEdit_242->text() != "" ? znaky += lineEdit_242->text() : znaky += " ";
    lineEdit_243->text() != "" ? znaky += lineEdit_243->text() : znaky += " ";
    lineEdit_244->text() != "" ? znaky += lineEdit_244->text() : znaky += " ";
    lineEdit_245->text() != "" ? znaky += lineEdit_245->text() : znaky += " ";
    lineEdit_246->text() != "" ? znaky += lineEdit_246->text() : znaky += " ";
    lineEdit_247->text() != "" ? znaky += lineEdit_247->text() : znaky += " ";
    lineEdit_248->text() != "" ? znaky += lineEdit_248->text() : znaky += " ";
    lineEdit_249->text() != "" ? znaky += lineEdit_249->text() : znaky += " ";
    lineEdit_250->text() != "" ? znaky += lineEdit_250->text() : znaky += " ";
    lineEdit_251->text() != "" ? znaky += lineEdit_251->text() : znaky += " ";
    lineEdit_252->text() != "" ? znaky += lineEdit_252->text() : znaky += " ";
    lineEdit_253->text() != "" ? znaky += lineEdit_253->text() : znaky += " ";
    lineEdit_254->text() != "" ? znaky += lineEdit_254->text() : znaky += " ";
    lineEdit_255->text() != "" ? znaky += lineEdit_255->text() : znaky += " ";
    lineEdit_256->text() != "" ? znaky += lineEdit_256->text() : znaky += " ";
    lineEdit_257->text() != "" ? znaky += lineEdit_257->text() : znaky += " ";
    lineEdit_258->text() != "" ? znaky += lineEdit_258->text() : znaky += " ";
    lineEdit_259->text() != "" ? znaky += lineEdit_259->text() : znaky += " ";
    lineEdit_260->text() != "" ? znaky += lineEdit_260->text() : znaky += " ";
    lineEdit_261->text() != "" ? znaky += lineEdit_261->text() : znaky += " ";
    lineEdit_262->text() != "" ? znaky += lineEdit_262->text() : znaky += " ";
    lineEdit_263->text() != "" ? znaky += lineEdit_263->text() : znaky += " ";
    lineEdit_264->text() != "" ? znaky += lineEdit_264->text() : znaky += " ";
    lineEdit_265->text() != "" ? znaky += lineEdit_265->text() : znaky += " ";
    lineEdit_266->text() != "" ? znaky += lineEdit_266->text() : znaky += " ";
    lineEdit_267->text() != "" ? znaky += lineEdit_267->text() : znaky += " ";
    lineEdit_268->text() != "" ? znaky += lineEdit_268->text() : znaky += " ";
    lineEdit_269->text() != "" ? znaky += lineEdit_269->text() : znaky += " ";
    lineEdit_270->text() != "" ? znaky += lineEdit_270->text() : znaky += " ";
    lineEdit_271->text() != "" ? znaky += lineEdit_271->text() : znaky += " ";
    lineEdit_272->text() != "" ? znaky += lineEdit_272->text() : znaky += " ";
    lineEdit_273->text() != "" ? znaky += lineEdit_273->text() : znaky += " ";
    lineEdit_274->text() != "" ? znaky += lineEdit_274->text() : znaky += " ";
    lineEdit_275->text() != "" ? znaky += lineEdit_275->text() : znaky += " ";
    lineEdit_276->text() != "" ? znaky += lineEdit_276->text() : znaky += " ";
    lineEdit_277->text() != "" ? znaky += lineEdit_277->text() : znaky += " ";
    lineEdit_278->text() != "" ? znaky += lineEdit_278->text() : znaky += " ";
    lineEdit_279->text() != "" ? znaky += lineEdit_279->text() : znaky += " ";
    lineEdit_280->text() != "" ? znaky += lineEdit_280->text() : znaky += " ";
    lineEdit_281->text() != "" ? znaky += lineEdit_281->text() : znaky += " ";
    lineEdit_282->text() != "" ? znaky += lineEdit_282->text() : znaky += " ";
    lineEdit_283->text() != "" ? znaky += lineEdit_283->text() : znaky += " ";
    lineEdit_284->text() != "" ? znaky += lineEdit_284->text() : znaky += " ";
    lineEdit_285->text() != "" ? znaky += lineEdit_285->text() : znaky += " ";
    lineEdit_286->text() != "" ? znaky += lineEdit_286->text() : znaky += " ";
    lineEdit_287->text() != "" ? znaky += lineEdit_287->text() : znaky += " ";
    lineEdit_288->text() != "" ? znaky += lineEdit_288->text() : znaky += " ";
    lineEdit_289->text() != "" ? znaky += lineEdit_289->text() : znaky += " ";
    lineEdit_290->text() != "" ? znaky += lineEdit_290->text() : znaky += " ";
    lineEdit_291->text() != "" ? znaky += lineEdit_291->text() : znaky += " ";
    lineEdit_292->text() != "" ? znaky += lineEdit_292->text() : znaky += " ";
    lineEdit_293->text() != "" ? znaky += lineEdit_293->text() : znaky += " ";
    lineEdit_294->text() != "" ? znaky += lineEdit_294->text() : znaky += " ";
    lineEdit_295->text() != "" ? znaky += lineEdit_295->text() : znaky += " ";
    lineEdit_296->text() != "" ? znaky += lineEdit_296->text() : znaky += " ";
    lineEdit_297->text() != "" ? znaky += lineEdit_297->text() : znaky += " ";
    lineEdit_298->text() != "" ? znaky += lineEdit_298->text() : znaky += " ";
    lineEdit_299->text() != "" ? znaky += lineEdit_299->text() : znaky += " ";
    lineEdit_300->text() != "" ? znaky += lineEdit_300->text() : znaky += " ";
    lineEdit_301->text() != "" ? znaky += lineEdit_301->text() : znaky += " ";
    lineEdit_302->text() != "" ? znaky += lineEdit_302->text() : znaky += " ";
    lineEdit_303->text() != "" ? znaky += lineEdit_303->text() : znaky += " ";
    lineEdit_304->text() != "" ? znaky += lineEdit_304->text() : znaky += " ";
    lineEdit_305->text() != "" ? znaky += lineEdit_305->text() : znaky += " ";
    lineEdit_306->text() != "" ? znaky += lineEdit_306->text() : znaky += " ";
    lineEdit_307->text() != "" ? znaky += lineEdit_307->text() : znaky += " ";
    lineEdit_308->text() != "" ? znaky += lineEdit_308->text() : znaky += " ";
    lineEdit_309->text() != "" ? znaky += lineEdit_309->text() : znaky += " ";
    lineEdit_310->text() != "" ? znaky += lineEdit_310->text() : znaky += " ";
    lineEdit_311->text() != "" ? znaky += lineEdit_311->text() : znaky += " ";
    lineEdit_312->text() != "" ? znaky += lineEdit_312->text() : znaky += " ";
    lineEdit_313->text() != "" ? znaky += lineEdit_313->text() : znaky += " ";
    lineEdit_314->text() != "" ? znaky += lineEdit_314->text() : znaky += " ";
    lineEdit_315->text() != "" ? znaky += lineEdit_315->text() : znaky += " ";
    lineEdit_316->text() != "" ? znaky += lineEdit_316->text() : znaky += " ";
    lineEdit_317->text() != "" ? znaky += lineEdit_317->text() : znaky += " ";
    lineEdit_318->text() != "" ? znaky += lineEdit_318->text() : znaky += " ";
    lineEdit_319->text() != "" ? znaky += lineEdit_319->text() : znaky += " ";
    lineEdit_320->text() != "" ? znaky += lineEdit_320->text() : znaky += " ";
    lineEdit_321->text() != "" ? znaky += lineEdit_321->text() : znaky += " ";
    lineEdit_322->text() != "" ? znaky += lineEdit_322->text() : znaky += " ";
    lineEdit_323->text() != "" ? znaky += lineEdit_323->text() : znaky += " ";
    lineEdit_324->text() != "" ? znaky += lineEdit_324->text() : znaky += " ";
    lineEdit_325->text() != "" ? znaky += lineEdit_325->text() : znaky += " ";
    lineEdit_326->text() != "" ? znaky += lineEdit_326->text() : znaky += " ";
    lineEdit_327->text() != "" ? znaky += lineEdit_327->text() : znaky += " ";
    lineEdit_328->text() != "" ? znaky += lineEdit_328->text() : znaky += " ";
    lineEdit_329->text() != "" ? znaky += lineEdit_329->text() : znaky += " ";
    lineEdit_330->text() != "" ? znaky += lineEdit_330->text() : znaky += " ";
    lineEdit_331->text() != "" ? znaky += lineEdit_331->text() : znaky += " ";
    lineEdit_332->text() != "" ? znaky += lineEdit_332->text() : znaky += " ";
    lineEdit_333->text() != "" ? znaky += lineEdit_333->text() : znaky += " ";
    lineEdit_334->text() != "" ? znaky += lineEdit_334->text() : znaky += " ";
    lineEdit_335->text() != "" ? znaky += lineEdit_335->text() : znaky += " ";
    lineEdit_336->text() != "" ? znaky += lineEdit_336->text() : znaky += " ";
    lineEdit_337->text() != "" ? znaky += lineEdit_337->text() : znaky += " ";
    lineEdit_338->text() != "" ? znaky += lineEdit_338->text() : znaky += " ";
    lineEdit_339->text() != "" ? znaky += lineEdit_339->text() : znaky += " ";
    lineEdit_340->text() != "" ? znaky += lineEdit_340->text() : znaky += " ";
    lineEdit_341->text() != "" ? znaky += lineEdit_341->text() : znaky += " ";
    lineEdit_342->text() != "" ? znaky += lineEdit_342->text() : znaky += " ";
    lineEdit_343->text() != "" ? znaky += lineEdit_343->text() : znaky += " ";
    lineEdit_344->text() != "" ? znaky += lineEdit_344->text() : znaky += " ";
    lineEdit_345->text() != "" ? znaky += lineEdit_345->text() : znaky += " ";
    lineEdit_346->text() != "" ? znaky += lineEdit_346->text() : znaky += " ";
    lineEdit_347->text() != "" ? znaky += lineEdit_347->text() : znaky += " ";
    lineEdit_348->text() != "" ? znaky += lineEdit_348->text() : znaky += " ";
    lineEdit_349->text() != "" ? znaky += lineEdit_349->text() : znaky += " ";
    lineEdit_350->text() != "" ? znaky += lineEdit_350->text() : znaky += " ";
    lineEdit_351->text() != "" ? znaky += lineEdit_351->text() : znaky += " ";
    lineEdit_352->text() != "" ? znaky += lineEdit_352->text() : znaky += " ";
    lineEdit_353->text() != "" ? znaky += lineEdit_353->text() : znaky += " ";
    lineEdit_354->text() != "" ? znaky += lineEdit_354->text() : znaky += " ";
    lineEdit_355->text() != "" ? znaky += lineEdit_355->text() : znaky += " ";
    lineEdit_356->text() != "" ? znaky += lineEdit_356->text() : znaky += " ";
    lineEdit_357->text() != "" ? znaky += lineEdit_357->text() : znaky += " ";
    lineEdit_358->text() != "" ? znaky += lineEdit_358->text() : znaky += " ";
    lineEdit_359->text() != "" ? znaky += lineEdit_359->text() : znaky += " ";
    lineEdit_360->text() != "" ? znaky += lineEdit_360->text() : znaky += " ";
    lineEdit_361->text() != "" ? znaky += lineEdit_361->text() : znaky += " ";
    lineEdit_362->text() != "" ? znaky += lineEdit_362->text() : znaky += " ";
    lineEdit_363->text() != "" ? znaky += lineEdit_363->text() : znaky += " ";
    lineEdit_364->text() != "" ? znaky += lineEdit_364->text() : znaky += " ";
    lineEdit_365->text() != "" ? znaky += lineEdit_365->text() : znaky += " ";
    lineEdit_366->text() != "" ? znaky += lineEdit_366->text() : znaky += " ";
    lineEdit_367->text() != "" ? znaky += lineEdit_367->text() : znaky += " ";
    lineEdit_368->text() != "" ? znaky += lineEdit_368->text() : znaky += " ";
    lineEdit_369->text() != "" ? znaky += lineEdit_369->text() : znaky += " ";
    lineEdit_370->text() != "" ? znaky += lineEdit_370->text() : znaky += " ";
    lineEdit_371->text() != "" ? znaky += lineEdit_371->text() : znaky += " ";
    lineEdit_372->text() != "" ? znaky += lineEdit_372->text() : znaky += " ";
    lineEdit_373->text() != "" ? znaky += lineEdit_373->text() : znaky += " ";
    lineEdit_374->text() != "" ? znaky += lineEdit_374->text() : znaky += " ";
    lineEdit_375->text() != "" ? znaky += lineEdit_375->text() : znaky += " ";
    lineEdit_376->text() != "" ? znaky += lineEdit_376->text() : znaky += " ";
    lineEdit_377->text() != "" ? znaky += lineEdit_377->text() : znaky += " ";
    lineEdit_378->text() != "" ? znaky += lineEdit_378->text() : znaky += " ";
    lineEdit_379->text() != "" ? znaky += lineEdit_379->text() : znaky += " ";
    lineEdit_380->text() != "" ? znaky += lineEdit_380->text() : znaky += " ";
    lineEdit_381->text() != "" ? znaky += lineEdit_381->text() : znaky += " ";
    lineEdit_382->text() != "" ? znaky += lineEdit_382->text() : znaky += " ";
    lineEdit_383->text() != "" ? znaky += lineEdit_383->text() : znaky += " ";
    lineEdit_384->text() != "" ? znaky += lineEdit_384->text() : znaky += " ";
    lineEdit_385->text() != "" ? znaky += lineEdit_385->text() : znaky += " ";
    lineEdit_386->text() != "" ? znaky += lineEdit_386->text() : znaky += " ";
    lineEdit_387->text() != "" ? znaky += lineEdit_387->text() : znaky += " ";
    lineEdit_388->text() != "" ? znaky += lineEdit_388->text() : znaky += " ";
    lineEdit_389->text() != "" ? znaky += lineEdit_389->text() : znaky += " ";
    lineEdit_390->text() != "" ? znaky += lineEdit_390->text() : znaky += " ";
    lineEdit_391->text() != "" ? znaky += lineEdit_391->text() : znaky += " ";
    lineEdit_392->text() != "" ? znaky += lineEdit_392->text() : znaky += " ";
    lineEdit_393->text() != "" ? znaky += lineEdit_393->text() : znaky += " ";
    lineEdit_394->text() != "" ? znaky += lineEdit_394->text() : znaky += " ";
    lineEdit_395->text() != "" ? znaky += lineEdit_395->text() : znaky += " ";
    lineEdit_396->text() != "" ? znaky += lineEdit_396->text() : znaky += " ";
    lineEdit_397->text() != "" ? znaky += lineEdit_397->text() : znaky += " ";
    lineEdit_398->text() != "" ? znaky += lineEdit_398->text() : znaky += " ";
    lineEdit_399->text() != "" ? znaky += lineEdit_399->text() : znaky += " ";
    lineEdit_400->text() != "" ? znaky += lineEdit_400->text() : znaky += " ";
    lineEdit_401->text() != "" ? znaky += lineEdit_401->text() : znaky += " ";
    lineEdit_402->text() != "" ? znaky += lineEdit_402->text() : znaky += " ";
    lineEdit_403->text() != "" ? znaky += lineEdit_403->text() : znaky += " ";
    lineEdit_404->text() != "" ? znaky += lineEdit_404->text() : znaky += " ";
    lineEdit_405->text() != "" ? znaky += lineEdit_405->text() : znaky += " ";
    lineEdit_406->text() != "" ? znaky += lineEdit_406->text() : znaky += " ";
    lineEdit_407->text() != "" ? znaky += lineEdit_407->text() : znaky += " ";
    lineEdit_408->text() != "" ? znaky += lineEdit_408->text() : znaky += " ";
    lineEdit_409->text() != "" ? znaky += lineEdit_409->text() : znaky += " ";
    lineEdit_410->text() != "" ? znaky += lineEdit_410->text() : znaky += " ";
    lineEdit_411->text() != "" ? znaky += lineEdit_411->text() : znaky += " ";
    lineEdit_412->text() != "" ? znaky += lineEdit_412->text() : znaky += " ";
    lineEdit_413->text() != "" ? znaky += lineEdit_413->text() : znaky += " ";
    lineEdit_414->text() != "" ? znaky += lineEdit_414->text() : znaky += " ";
    lineEdit_415->text() != "" ? znaky += lineEdit_415->text() : znaky += " ";
    lineEdit_416->text() != "" ? znaky += lineEdit_416->text() : znaky += " ";
    lineEdit_417->text() != "" ? znaky += lineEdit_417->text() : znaky += " ";
    lineEdit_418->text() != "" ? znaky += lineEdit_418->text() : znaky += " ";
    lineEdit_419->text() != "" ? znaky += lineEdit_419->text() : znaky += " ";
    lineEdit_420->text() != "" ? znaky += lineEdit_420->text() : znaky += " ";
    lineEdit_421->text() != "" ? znaky += lineEdit_421->text() : znaky += " ";
    lineEdit_422->text() != "" ? znaky += lineEdit_422->text() : znaky += " ";
    lineEdit_423->text() != "" ? znaky += lineEdit_423->text() : znaky += " ";
    lineEdit_424->text() != "" ? znaky += lineEdit_424->text() : znaky += " ";
    lineEdit_425->text() != "" ? znaky += lineEdit_425->text() : znaky += " ";
    lineEdit_426->text() != "" ? znaky += lineEdit_426->text() : znaky += " ";
    lineEdit_427->text() != "" ? znaky += lineEdit_427->text() : znaky += " ";
    lineEdit_428->text() != "" ? znaky += lineEdit_428->text() : znaky += " ";
    lineEdit_429->text() != "" ? znaky += lineEdit_429->text() : znaky += " ";
    lineEdit_430->text() != "" ? znaky += lineEdit_430->text() : znaky += " ";
    lineEdit_431->text() != "" ? znaky += lineEdit_431->text() : znaky += " ";
    lineEdit_432->text() != "" ? znaky += lineEdit_432->text() : znaky += " ";
    lineEdit_433->text() != "" ? znaky += lineEdit_433->text() : znaky += " ";
    lineEdit_434->text() != "" ? znaky += lineEdit_434->text() : znaky += " ";
    lineEdit_435->text() != "" ? znaky += lineEdit_435->text() : znaky += " ";
    lineEdit_436->text() != "" ? znaky += lineEdit_436->text() : znaky += " ";
    lineEdit_437->text() != "" ? znaky += lineEdit_437->text() : znaky += " ";
    lineEdit_438->text() != "" ? znaky += lineEdit_438->text() : znaky += " ";
    lineEdit_439->text() != "" ? znaky += lineEdit_439->text() : znaky += " ";
    lineEdit_440->text() != "" ? znaky += lineEdit_440->text() : znaky += " ";
    lineEdit_441->text() != "" ? znaky += lineEdit_441->text() : znaky += " ";
    lineEdit_442->text() != "" ? znaky += lineEdit_442->text() : znaky += " ";
    lineEdit_443->text() != "" ? znaky += lineEdit_443->text() : znaky += " ";
    lineEdit_444->text() != "" ? znaky += lineEdit_444->text() : znaky += " ";
    lineEdit_445->text() != "" ? znaky += lineEdit_445->text() : znaky += " ";
    lineEdit_446->text() != "" ? znaky += lineEdit_446->text() : znaky += " ";
    lineEdit_447->text() != "" ? znaky += lineEdit_447->text() : znaky += " ";
    lineEdit_448->text() != "" ? znaky += lineEdit_448->text() : znaky += " ";
    lineEdit_449->text() != "" ? znaky += lineEdit_449->text() : znaky += " ";
    lineEdit_450->text() != "" ? znaky += lineEdit_450->text() : znaky += " ";
    lineEdit_451->text() != "" ? znaky += lineEdit_451->text() : znaky += " ";
    lineEdit_452->text() != "" ? znaky += lineEdit_452->text() : znaky += " ";
    lineEdit_453->text() != "" ? znaky += lineEdit_453->text() : znaky += " ";
    lineEdit_454->text() != "" ? znaky += lineEdit_454->text() : znaky += " ";
    lineEdit_455->text() != "" ? znaky += lineEdit_455->text() : znaky += " ";
    lineEdit_456->text() != "" ? znaky += lineEdit_456->text() : znaky += " ";
    lineEdit_457->text() != "" ? znaky += lineEdit_457->text() : znaky += " ";
    lineEdit_458->text() != "" ? znaky += lineEdit_458->text() : znaky += " ";
    lineEdit_459->text() != "" ? znaky += lineEdit_459->text() : znaky += " ";
    lineEdit_460->text() != "" ? znaky += lineEdit_460->text() : znaky += " ";
    lineEdit_461->text() != "" ? znaky += lineEdit_461->text() : znaky += " ";
    lineEdit_462->text() != "" ? znaky += lineEdit_462->text() : znaky += " ";
    lineEdit_463->text() != "" ? znaky += lineEdit_463->text() : znaky += " ";
    lineEdit_464->text() != "" ? znaky += lineEdit_464->text() : znaky += " ";
    lineEdit_465->text() != "" ? znaky += lineEdit_465->text() : znaky += " ";
    lineEdit_466->text() != "" ? znaky += lineEdit_466->text() : znaky += " ";
    lineEdit_467->text() != "" ? znaky += lineEdit_467->text() : znaky += " ";
    lineEdit_468->text() != "" ? znaky += lineEdit_468->text() : znaky += " ";
    lineEdit_469->text() != "" ? znaky += lineEdit_469->text() : znaky += " ";
    lineEdit_470->text() != "" ? znaky += lineEdit_470->text() : znaky += " ";
    lineEdit_471->text() != "" ? znaky += lineEdit_471->text() : znaky += " ";
    lineEdit_472->text() != "" ? znaky += lineEdit_472->text() : znaky += " ";
    lineEdit_473->text() != "" ? znaky += lineEdit_473->text() : znaky += " ";
    lineEdit_474->text() != "" ? znaky += lineEdit_474->text() : znaky += " ";
    lineEdit_475->text() != "" ? znaky += lineEdit_475->text() : znaky += " ";
    lineEdit_476->text() != "" ? znaky += lineEdit_476->text() : znaky += " ";
    lineEdit_477->text() != "" ? znaky += lineEdit_477->text() : znaky += " ";
    lineEdit_478->text() != "" ? znaky += lineEdit_478->text() : znaky += " ";
    lineEdit_479->text() != "" ? znaky += lineEdit_479->text() : znaky += " ";
    lineEdit_480->text() != "" ? znaky += lineEdit_480->text() : znaky += " ";

    qDebug()<<"before "<< znaky;
    QStringList numberString;
    for(const auto character: znaky){
        numberString << QString::number(character.unicode(), 16);
    }
    HexStrData = numberString.join(" ");

    qDebug()<<HexStrData;

    ui->textEdit->setText(HexStrData);
}


void TEXT2BRAM::on_pushButton_4_pressed()
{
    if (File == ""){
        QString File = QFileDialog::getSaveFileName(this, "Select new COE file location", "", "Init file (*.coe *.txt)");
    }

    QFile file(File);
    if(file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QTextStream stream(&file);

        stream << "memory_initialization_radix=" << memory_initialization_radix << ";\n" << "memory_initialization_vector=" << HexStrData << ";\n";

        file.close();
        qDebug() << "Writing finished";
    }

    file.close();
}
