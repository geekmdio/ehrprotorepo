// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: medicalissues.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/GPBProtocolBuffers.h>
#else
 #import "GPBProtocolBuffers.h"
#endif

#if GOOGLE_PROTOBUF_OBJC_VERSION < 30002
#error This file was generated by a newer version of protoc which is incompatible with your Protocol Buffer library sources.
#endif
#if 30002 < GOOGLE_PROTOBUF_OBJC_MIN_SUPPORTED_VERSION
#error This file was generated by an older version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

NS_ASSUME_NONNULL_BEGIN

#pragma mark - Enum MedicalIssue

/**
 * This will be a list of the most common medical issues. There are around 70,000
 * ICD-10 entries, and that's challenging to structure so v1 will be a minimalist
 * attempt.
 **/
typedef GPB_ENUM(MedicalIssue) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  MedicalIssue_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  MedicalIssue_NoMedicalIssue = 0,
  MedicalIssue_ElevatedBloodPressure = 1,
  MedicalIssue_StageOneHypertension = 2,
  MedicalIssue_StageTwoHypertension = 3,
  MedicalIssue_StageThreeHypertension = 4,
  MedicalIssue_HypertensiveUrgency = 5,
  MedicalIssue_HypertensiveEmergency = 6,
  MedicalIssue_IschemicCoronaryArteryDisease = 7,
  MedicalIssue_NonischemicCoronaryArteryDisease = 8,
  MedicalIssue_SystolicHeartFailure = 9,
  MedicalIssue_DiastolicHeartFailure = 10,
  MedicalIssue_AtrialFibrillation = 11,
  MedicalIssue_LongQtSyndrome = 12,
  MedicalIssue_VentricularTachycardia = 13,
  MedicalIssue_VentricularFibrillation = 14,
  MedicalIssue_WolfeParkinsonWhiteSyndrome = 15,
  MedicalIssue_SupraventricularTachycardia = 16,
  MedicalIssue_OtherHeartDysrythmia = 17,
  MedicalIssue_DeepVenousThromboembolism = 18,
  MedicalIssue_SuperficialVenousThromboembolism = 19,
  MedicalIssue_PulmonaryEmbolism = 20,
  MedicalIssue_SaddleEmbolism = 21,
  MedicalIssue_MitralStenosis = 22,
  MedicalIssue_MitralRegurigitation = 23,
  MedicalIssue_AorticStenosis = 24,
  MedicalIssue_AorticRegurgitation = 25,
  MedicalIssue_TricuspidStenosis = 26,
  MedicalIssue_TricuspidRegurgitation = 27,
  MedicalIssue_PeripheralVascularDisease = 28,
  MedicalIssue_ChronicObstructivePulmonaryDisease = 29,
  MedicalIssue_Asthma = 30,
  MedicalIssue_SquamousCellLungCancer = 31,
  MedicalIssue_SmallCellLungCancer = 32,
  MedicalIssue_AdenocarcinomaLungCancer = 33,
  MedicalIssue_Pnuemonia = 34,
  MedicalIssue_PulmonaryTuberculosis = 35,
  MedicalIssue_CysticFibrosis = 36,
  MedicalIssue_DiffuseInterstitialLungDisease = 37,
  MedicalIssue_Pneumothorax = 38,
  MedicalIssue_TensionPneumothorax = 39,
  MedicalIssue_CerebrovascularDisease = 40,
  MedicalIssue_HistoryOfMyocardialInfarction = 41,
  MedicalIssue_HistoryOfCerebrovascularInfarction = 42,
  MedicalIssue_Epilepsy = 43,
  MedicalIssue_Meningitis = 44,
  MedicalIssue_HeadInjury = 45,
  MedicalIssue_TraumaticBrainInjry = 46,
  MedicalIssue_TensionHeadache = 47,
  MedicalIssue_MigraineHeadache = 48,
  MedicalIssue_ClusterHeadache = 49,
  MedicalIssue_ThunderclapHeadache = 50,
  MedicalIssue_SinusHeadache = 51,
  MedicalIssue_CaffeineWithdrawalHeadache = 52,
  MedicalIssue_ExertionHeadache = 53,
  MedicalIssue_HypertensionHeadache = 54,
  MedicalIssue_PostTraumaticHeadache = 55,
  MedicalIssue_ChronicToePain = 56,
  MedicalIssue_ChronicFootPain = 57,
  MedicalIssue_ChronicAnklePain = 58,
  MedicalIssue_ChronicKneePain = 59,
  MedicalIssue_ChronicHipPain = 60,
  MedicalIssue_ChronicAbdominalPain = 61,
  MedicalIssue_ChronicLumbarBackPain = 62,
  MedicalIssue_ChronicChestPain = 63,
  MedicalIssue_ChronicThoracicBackPain = 64,
  MedicalIssue_ChronicCervicalSpinalPain = 65,
  MedicalIssue_ChronicShoulderPain = 66,
  MedicalIssue_ChronicElbowPain = 67,
  MedicalIssue_ChronicWristPain = 68,
  MedicalIssue_ChronicHandPain = 69,
  MedicalIssue_ChronicFingerPain = 70,
  MedicalIssue_AcuteToePain = 71,
  MedicalIssue_AcuteFootPain = 72,
  MedicalIssue_AcuteAnklePain = 73,
  MedicalIssue_AcuteKneePain = 74,
  MedicalIssue_AcuteHipPain = 75,
  MedicalIssue_AcuteAbdominalPain = 76,
  MedicalIssue_AcuteLumbarBackPain = 77,
  MedicalIssue_AcuteChestPain = 78,
  MedicalIssue_AcuteThoracicBackPain = 79,
  MedicalIssue_AcuteCervicalSpinalPain = 80,
  MedicalIssue_AcuteShoulderPain = 81,
  MedicalIssue_AcuteElbowPain = 82,
  MedicalIssue_AcuteWristPain = 83,
  MedicalIssue_AcuteHandPain = 84,
  MedicalIssue_AcuteFingerPain = 85,
  MedicalIssue_ParkinsonsDisease = 86,
  MedicalIssue_AlzheimersDementia = 87,
  MedicalIssue_VascularDementia = 88,
  MedicalIssue_LewyBodyDementia = 89,
  MedicalIssue_FrontotemporalDementia = 90,
  MedicalIssue_HypoactiveDelirium = 91,
  MedicalIssue_HyperactiveDelirium = 92,
  MedicalIssue_MultipleSclerosis = 93,
  MedicalIssue_ProgressiveMuscularAtrophy = 94,
  MedicalIssue_AmyotrphicLateralSclerosis = 95,
  MedicalIssue_ProgressiveBulbarPalsy = 96,
  MedicalIssue_PepticUlcer = 97,
  MedicalIssue_Gastritis = 98,
  MedicalIssue_GastroesophagealRefluxDisease = 99,
  MedicalIssue_InflammatoryBowelDisease = 100,
  MedicalIssue_UlcerativeColitis = 101,
  MedicalIssue_ChronsDisease = 102,
  MedicalIssue_HepatitisA = 103,
  MedicalIssue_HepatitisB = 104,
  MedicalIssue_HepatitisC = 105,
  MedicalIssue_HepatitisD = 106,
  MedicalIssue_ColorectalCancer = 107,
  MedicalIssue_EsophagealCancer = 108,
  MedicalIssue_GastricCancer = 109,
  MedicalIssue_MalabsorptionSyndrome = 110,
  MedicalIssue_DiabetesMellitusType2 = 111,
  MedicalIssue_DiabetesMellitisType1 = 112,
  MedicalIssue_AnorexiaNervosa = 113,
  MedicalIssue_Underweight = 114,
  MedicalIssue_NormalWeight = 115,
  MedicalIssue_Overweight = 116,
  MedicalIssue_ObesityClass1 = 117,
  MedicalIssue_ObesityClass2 = 118,
  MedicalIssue_ObesityClass3 = 119,
  MedicalIssue_MetabolicObesityInNormalWeight = 120,
  MedicalIssue_ProteinEnergyMalnutrition = 121,
  MedicalIssue_HypothyroidismUnspecified = 122,
  MedicalIssue_HyperthyroidismUnspecified = 123,
  MedicalIssue_Thyroiditis = 124,
  MedicalIssue_ThyroidCancer = 125,
  MedicalIssue_ParathyroidCancer = 126,
  MedicalIssue_HyperparathyroidSyndrome = 127,
  MedicalIssue_Osteoarthritis = 128,
  MedicalIssue_RheumatoidArthritis = 129,
  MedicalIssue_Osteopenia = 130,
  MedicalIssue_Osteoporosis = 131,
  MedicalIssue_SepticArthritis = 132,
  MedicalIssue_Gout = 133,
  MedicalIssue_PseudoGout = 134,
  MedicalIssue_MyastheniaGravis = 135,
  MedicalIssue_SystemicLupusErythematosus = 136,
  MedicalIssue_UrinaryTractInfection = 137,
  MedicalIssue_Pyelonephritis = 138,
  MedicalIssue_BenignProstateHypertrophy = 139,
  MedicalIssue_ProstateCancer = 140,
  MedicalIssue_RenalCalculi = 141,
  MedicalIssue_RenalFailureStage1 = 142,
  MedicalIssue_RenalFailureStage2 = 143,
  MedicalIssue_RenalFailureStage3A = 144,
  MedicalIssue_RenalFailureStage3B = 145,
  MedicalIssue_RenalFailureStage4 = 146,
  MedicalIssue_RenalFailureStage5 = 147,
  MedicalIssue_Hemodialysis = 148,
  MedicalIssue_PeritonealDialysis = 149,
  MedicalIssue_Pregnancy = 150,
  MedicalIssue_SpontaneousAbortion = 151,
  MedicalIssue_TherapeuticAboration = 152,
  MedicalIssue_Infertility = 153,
  MedicalIssue_ContraceptiveUse = 154,
  MedicalIssue_Oligomenorrhea = 155,
  MedicalIssue_Dysmenorrhea = 156,
  MedicalIssue_PrimaryAmenorrhea = 157,
  MedicalIssue_SecondaryAmenorrhea = 158,
  MedicalIssue_Endometriosis = 159,
  MedicalIssue_SurgicalMenopause = 160,
  MedicalIssue_EarlyMenopause = 161,
  MedicalIssue_Perimenopause = 162,
  MedicalIssue_PostMenopause = 163,
  MedicalIssue_PostMenopausalBleed = 164,
  MedicalIssue_BreastCancer = 165,
  MedicalIssue_CervicalCancer = 166,
  MedicalIssue_OvarianCancer = 167,
  MedicalIssue_ErectileDysfunction = 168,
  MedicalIssue_TesticularCancer = 169,
  MedicalIssue_TesticularTorsion = 170,
  MedicalIssue_TesticularPain = 171,
  MedicalIssue_VaginalPain = 172,
  MedicalIssue_AnalPain = 173,
  MedicalIssue_AnemiaUnspecified = 174,
  MedicalIssue_IronDeficiencyAnemia = 175,
  MedicalIssue_SickleCellDisease = 176,
  MedicalIssue_MacrocyticAnemia = 177,
  MedicalIssue_MicrocyticAnemia = 178,
  MedicalIssue_Leukemia = 179,
  MedicalIssue_Lymphoma = 180,
  MedicalIssue_Myeloma = 181,
  MedicalIssue_HemophiliaA = 182,
  MedicalIssue_Depression = 183,
  MedicalIssue_Schizophrenia = 184,
  MedicalIssue_BipolarDisorder = 185,
  MedicalIssue_AnxietyDisorder = 186,
  MedicalIssue_Addiction = 187,
  MedicalIssue_EatingDisorder = 188,
  MedicalIssue_PrematureBirth = 189,
  MedicalIssue_Bronchiolitis = 190,
  MedicalIssue_Croup = 191,
  MedicalIssue_CerebralPalsy = 192,
  MedicalIssue_FailureToThrive = 193,
  MedicalIssue_ChildAbuse = 194,
  MedicalIssue_ElderAbuse = 195,
  MedicalIssue_HumanImmunideficiencyVirusInfection = 196,
  MedicalIssue_AcquiredImmuneDeficiencySyndrome = 197,
  MedicalIssue_Malaria = 198,
  MedicalIssue_Cholera = 199,
  MedicalIssue_Immunization = 200,
  MedicalIssue_Eczema = 201,
  MedicalIssue_DermatitisUnspecified = 202,
  MedicalIssue_Psoriasis = 203,
  MedicalIssue_Pemphigus = 204,
  MedicalIssue_Pemphigoid = 205,
  MedicalIssue_ErythemaMultiforme = 206,
  MedicalIssue_ErythemaNodosum = 207,
  MedicalIssue_SquamousCellSkinCancer = 208,
  MedicalIssue_BasaslCellSkinCancer = 209,
  MedicalIssue_MelanomaSkinCancer = 210,
  MedicalIssue_AcuteAbdomen = 211,
  MedicalIssue_Appendicitis = 212,
  MedicalIssue_Diverticulitis = 213,
  MedicalIssue_Diverticulosis = 214,
  MedicalIssue_ChronicPancreatitis = 215,
  MedicalIssue_AcutePancreatitis = 216,
  MedicalIssue_AlcoholicPancreatitis = 217,
  MedicalIssue_GallStonePancreatitis = 218,
  MedicalIssue_SmallBowelObstruction = 219,
  MedicalIssue_LargeBowelObstruction = 220,
  MedicalIssue_InguinalHernia = 221,
  MedicalIssue_PeriumbilicalHernia = 222,
  MedicalIssue_VentralHernia = 223,
  MedicalIssue_InternalHemorrhoids = 224,
  MedicalIssue_ExternalHemorrhoids = 225,
  MedicalIssue_AnalFissure = 226,
  MedicalIssue_GravesDisease = 227,
  MedicalIssue_Cholecystits = 228,
};

GPBEnumDescriptor *MedicalIssue_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL MedicalIssue_IsValidValue(int32_t value);

#pragma mark - MedicalissuesRoot

/**
 * Exposes the extension registry for this file.
 *
 * The base class provides:
 * @code
 *   + (GPBExtensionRegistry *)extensionRegistry;
 * @endcode
 * which is a @c GPBExtensionRegistry that includes all the extensions defined by
 * this file and all files that it depends on.
 **/
@interface MedicalissuesRoot : GPBRootObject
@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
