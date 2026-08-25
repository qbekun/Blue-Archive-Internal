#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class ICCGCardData; }
namespace MX::MinigameCCG { class CCGSkillData; }
namespace MX::MinigameCCG { class CCGLogicEffectData; }
namespace FlatData { class ConstMinigameCCGExcel; }
namespace MX::MinigameCCG { class ICCGCharacterData; }

#define MX_MINIGAMECCG_ICCGDATAPROVIDER_GETCARDDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMECCG_ICCGDATAPROVIDER_GETSKILLDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMECCG_ICCGDATAPROVIDER_INITIALIZEDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMECCG_ICCGDATAPROVIDER_GETLOGICEFFECTDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMECCG_ICCGDATAPROVIDER_GET_CONSTS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMECCG_ICCGDATAPROVIDER_GETCHARACTERDATA_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int ICCGDataProvider_TypeDefinitionIndex = 20471;

	class ICCGDataProvider : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::ICCGCardData* GetCardData(::System::Int64 arg)
		{
			return (return (::MX::MinigameCCG::ICCGCardData*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_ICCGDATAPROVIDER_GETCARDDATA_OFFSET))(arg, nullptr);
		}

		::MX::MinigameCCG::CCGSkillData* GetSkillData(::System::Int64 arg)
		{
			return (return (::MX::MinigameCCG::CCGSkillData*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_ICCGDATAPROVIDER_GETSKILLDATA_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* InitializeData()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_ICCGDATAPROVIDER_INITIALIZEDATA_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::CCGLogicEffectData* GetLogicEffectData(::System::Int64 arg)
		{
			return (return (::MX::MinigameCCG::CCGLogicEffectData*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_ICCGDATAPROVIDER_GETLOGICEFFECTDATA_OFFSET))(arg, nullptr);
		}

		::FlatData::ConstMinigameCCGExcel* get_Consts()
		{
			return (return (::FlatData::ConstMinigameCCGExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_ICCGDATAPROVIDER_GET_CONSTS_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::ICCGCharacterData* GetCharacterData(::System::Int64 arg)
		{
			return (return (::MX::MinigameCCG::ICCGCharacterData*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_ICCGDATAPROVIDER_GETCHARACTERDATA_OFFSET))(arg, nullptr);
		}

	};
}

