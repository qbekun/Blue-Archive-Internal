#pragma once
#include "../../unitysdk.h"

namespace FlatData { class ConstMinigameCCGExcel; }
namespace MX::MinigameCCG { class CCGLogicEffectData; }
namespace MX::Data::Excel { class MinigameCCGSkillExcel&; }
namespace MX::MinigameCCG { class ICCGCharacterData; }
namespace MX::MinigameCCG { class CCGCharacterData; }
namespace MX::MinigameCCG { class CCGSkillData; }
namespace MX::Data::Excel { class MinigameCCGCardExcel&; }
namespace MX::MinigameCCG { class ICCGCardData; }
namespace MX::MinigameCCG { class CCGCardData; }

#define MX_MINIGAMECCG_CCGDATAPROVIDER_LOADENTITYDATA_OFFSET UNITYSDK_OFFSET(0x1DB1100)
#define MX_MINIGAMECCG_CCGDATAPROVIDER_GETLOGICEFFECTDATA_OFFSET UNITYSDK_OFFSET(0x1DB1AF0)
#define MX_MINIGAMECCG_CCGDATAPROVIDER_TRYGETSKILLEXCEL_OFFSET UNITYSDK_OFFSET(0x1DB1B60)
#define MX_MINIGAMECCG_CCGDATAPROVIDER_GETCHARACTERDATA_OFFSET UNITYSDK_OFFSET(0x1DB1BC0)
#define MX_MINIGAMECCG_CCGDATAPROVIDER_ADDCHARACTERDATA_OFFSET UNITYSDK_OFFSET(0x1DB1A30)
#define MX_MINIGAMECCG_CCGDATAPROVIDER_GET_CONSTS_OFFSET UNITYSDK_OFFSET(0x1DB1C30)
#define MX_MINIGAMECCG_CCGDATAPROVIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DB1C40)
#define MX_MINIGAMECCG_CCGDATAPROVIDER_GETSKILLDATA_OFFSET UNITYSDK_OFFSET(0x1DB1EA0)
#define MX_MINIGAMECCG_CCGDATAPROVIDER_ADDSKILLDATA_OFFSET UNITYSDK_OFFSET(0x1DB1F10)
#define MX_MINIGAMECCG_CCGDATAPROVIDER_TRYGETCARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1DB1F70)
#define MX_MINIGAMECCG_CCGDATAPROVIDER_GETCARDDATA_OFFSET UNITYSDK_OFFSET(0x1DB1FD0)
#define MX_MINIGAMECCG_CCGDATAPROVIDER_LOADLOGICEFFECTDATA_OFFSET UNITYSDK_OFFSET(0x1DB2040)
#define MX_MINIGAMECCG_CCGDATAPROVIDER_LOADSKILLDATA_OFFSET UNITYSDK_OFFSET(0x1DB20D0)
#define MX_MINIGAMECCG_CCGDATAPROVIDER_ADDCARDDATA_OFFSET UNITYSDK_OFFSET(0x1DB1A90)
#define MX_MINIGAMECCG_CCGDATAPROVIDER_INITIALIZEDATA_OFFSET UNITYSDK_OFFSET(0x1DB2160)
#define MX_MINIGAMECCG_CCGDATAPROVIDER_ADDLOGICEFFECTDATA_OFFSET UNITYSDK_OFFSET(0x1DB21F0)
#define MX_MINIGAMECCG_CCGDATAPROVIDER_LOADTABLE_OFFSET UNITYSDK_OFFSET(0x1DB2250)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGDataProvider_TypeDefinitionIndex = 20434;

	class CCGDataProvider : public Il2CppObject
	{
	public:
		::FlatData::ConstMinigameCCGExcel* _constData; // 0x10
		Il2CppObject* _skillData; // 0x20
		Il2CppObject* _skillExcels; // 0x28
		Il2CppObject* _characterData; // 0x30
		Il2CppObject* _cardData; // 0x38
		Il2CppObject* _logicEffectData; // 0x40
		Il2CppObject* _cardExcels; // 0x48

		::System::Void LoadEntityData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGDATAPROVIDER_LOADENTITYDATA_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::CCGLogicEffectData* GetLogicEffectData(::System::Int64 arg)
		{
			return (return (::MX::MinigameCCG::CCGLogicEffectData*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGDATAPROVIDER_GETLOGICEFFECTDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetSkillExcel(::System::Int64 arg, ::MX::Data::Excel::MinigameCCGSkillExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::MinigameCCGSkillExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGDATAPROVIDER_TRYGETSKILLEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::MX::MinigameCCG::ICCGCharacterData* GetCharacterData(::System::Int64 arg)
		{
			return (return (::MX::MinigameCCG::ICCGCharacterData*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGDATAPROVIDER_GETCHARACTERDATA_OFFSET))(arg, nullptr);
		}

		::System::Void AddCharacterData(::MX::MinigameCCG::CCGCharacterData* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGCharacterData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGDATAPROVIDER_ADDCHARACTERDATA_OFFSET))(arg, nullptr);
		}

		::FlatData::ConstMinigameCCGExcel* get_Consts()
		{
			return (return (::FlatData::ConstMinigameCCGExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGDATAPROVIDER_GET_CONSTS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGDATAPROVIDER_.CTOR_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::CCGSkillData* GetSkillData(::System::Int64 arg)
		{
			return (return (::MX::MinigameCCG::CCGSkillData*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGDATAPROVIDER_GETSKILLDATA_OFFSET))(arg, nullptr);
		}

		::System::Void AddSkillData(::MX::MinigameCCG::CCGSkillData* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGSkillData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGDATAPROVIDER_ADDSKILLDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetCardExcel(::System::Int64 arg, ::MX::Data::Excel::MinigameCCGCardExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::MinigameCCGCardExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGDATAPROVIDER_TRYGETCARDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::MX::MinigameCCG::ICCGCardData* GetCardData(::System::Int64 arg)
		{
			return (return (::MX::MinigameCCG::ICCGCardData*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGDATAPROVIDER_GETCARDDATA_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* LoadLogicEffectData()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGDATAPROVIDER_LOADLOGICEFFECTDATA_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* LoadSkillData()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGDATAPROVIDER_LOADSKILLDATA_OFFSET))(nullptr);
		}

		::System::Void AddCardData(::MX::MinigameCCG::CCGCardData* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGCardData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGDATAPROVIDER_ADDCARDDATA_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* InitializeData()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGDATAPROVIDER_INITIALIZEDATA_OFFSET))(nullptr);
		}

		::System::Void AddLogicEffectData(::MX::MinigameCCG::CCGLogicEffectData* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGLogicEffectData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGDATAPROVIDER_ADDLOGICEFFECTDATA_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* LoadTable()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGDATAPROVIDER_LOADTABLE_OFFSET))(nullptr);
		}

	};
}

