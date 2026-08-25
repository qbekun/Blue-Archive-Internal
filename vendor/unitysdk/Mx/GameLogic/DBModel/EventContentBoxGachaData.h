#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTBOXGACHADATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xFFC5B0)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTBOXGACHADATA_SET_VARIATIONS_OFFSET UNITYSDK_OFFSET(0xFFC7F0)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTBOXGACHADATA_GET_VARIATIONS_OFFSET UNITYSDK_OFFSET(0xFFC800)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTBOXGACHADATA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xFFC810)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTBOXGACHADATA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xFFC820)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int EventContentBoxGachaData_TypeDefinitionIndex = 12598;

	class EventContentBoxGachaData : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x10
		Il2CppObject* _Variations_k__BackingField; // 0x18

		::System::Void .ctor(::System::Int64 arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTBOXGACHADATA_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_Variations(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTBOXGACHADATA_SET_VARIATIONS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Variations()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTBOXGACHADATA_GET_VARIATIONS_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTBOXGACHADATA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTBOXGACHADATA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

	};
}

