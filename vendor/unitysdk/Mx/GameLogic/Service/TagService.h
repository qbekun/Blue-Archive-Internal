#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class CafeDB; }
namespace MX::GameLogic::DBModel { class CharacterDB; }
namespace MX::GameLogic::DBModel { class FurnitureDB; }

#define MX_GAMELOGIC_SERVICE_TAGSERVICE_EXTRACT_OFFSET UNITYSDK_OFFSET(0xFCA730)
#define MX_GAMELOGIC_SERVICE_TAGSERVICE_EXTRACT_OFFSET UNITYSDK_OFFSET(0xFCAE50)
#define MX_GAMELOGIC_SERVICE_TAGSERVICE_EXTRACTFROMCHARACTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0xFCAE70)
#define MX_GAMELOGIC_SERVICE_TAGSERVICE_EXTRACT_OFFSET UNITYSDK_OFFSET(0xFCADB0)
#define MX_GAMELOGIC_SERVICE_TAGSERVICE_EXTRACTFROMFURNITUREUNIQUEID_OFFSET UNITYSDK_OFFSET(0xFCAFE0)
#define MX_GAMELOGIC_SERVICE_TAGSERVICE_EXTRACTCHARACTERACADEMYTAG_OFFSET UNITYSDK_OFFSET(0xFCB070)
#define MX_GAMELOGIC_SERVICE_TAGSERVICE_EXTRACTCHARACTERACADEMYTAG_OFFSET UNITYSDK_OFFSET(0xFCB0A0)
#define MX_GAMELOGIC_SERVICE_TAGSERVICE_CALCAPPLIEDCHARACTERACADEMYTAGCOUNT_OFFSET UNITYSDK_OFFSET(0xFCB1A0)
#define MX_GAMELOGIC_SERVICE_TAGSERVICE_.CTOR_OFFSET UNITYSDK_OFFSET(0xFCB520)

namespace MX::GameLogic::Service
{
	inline static constexpr unsigned int TagService_TypeDefinitionIndex = 12415;

	class TagService : public Il2CppObject
	{
	public:
		Il2CppObject* Extract(::MX::GameLogic::DBModel::CafeDB* arg)
		{
			return ((Il2CppObject*(*)(::MX::GameLogic::DBModel::CafeDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_TAGSERVICE_EXTRACT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Extract(::MX::GameLogic::DBModel::CharacterDB* arg)
		{
			return ((Il2CppObject*(*)(::MX::GameLogic::DBModel::CharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_TAGSERVICE_EXTRACT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ExtractFromCharacterUniqueId(::System::Int64 arg)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_TAGSERVICE_EXTRACTFROMCHARACTERUNIQUEID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Extract(::MX::GameLogic::DBModel::FurnitureDB* arg)
		{
			return ((Il2CppObject*(*)(::MX::GameLogic::DBModel::FurnitureDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_TAGSERVICE_EXTRACT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ExtractFromFurnitureUniqueId(::System::Int64 arg)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_TAGSERVICE_EXTRACTFROMFURNITUREUNIQUEID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ExtractCharacterAcademyTag(::MX::GameLogic::DBModel::CharacterDB* arg)
		{
			return ((Il2CppObject*(*)(::MX::GameLogic::DBModel::CharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_TAGSERVICE_EXTRACTCHARACTERACADEMYTAG_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ExtractCharacterAcademyTag(::System::Int64 arg)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_TAGSERVICE_EXTRACTCHARACTERACADEMYTAG_OFFSET))(arg, nullptr);
		}

		::System::Int32 CalcAppliedCharacterAcademyTagCount(Il2CppObject* arg, Il2CppObject* arg2)
		{
			return ((::System::Int32(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_TAGSERVICE_CALCAPPLIEDCHARACTERACADEMYTAGCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_TAGSERVICE_.CTOR_OFFSET))(nullptr);
		}

	};
}

