#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class EventContentTreasureCell; }

#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASURECELL_GET_X_OFFSET UNITYSDK_OFFSET(0xFFE380)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASURECELL_SET_X_OFFSET UNITYSDK_OFFSET(0xFFE390)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASURECELL_GET_Y_OFFSET UNITYSDK_OFFSET(0xFFE3A0)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASURECELL_SET_Y_OFFSET UNITYSDK_OFFSET(0xFFE3B0)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASURECELL_.CTOR_OFFSET UNITYSDK_OFFSET(0xFFE3C0)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASURECELL_EQUALS_OFFSET UNITYSDK_OFFSET(0xFFE350)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASURECELL_EQUALS_OFFSET UNITYSDK_OFFSET(0xFFE210)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASURECELL_EQUALS_OFFSET UNITYSDK_OFFSET(0xFFE3F0)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASURECELL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xFFE470)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int EventContentTreasureCell_TypeDefinitionIndex = 12620;

	class EventContentTreasureCell : public Il2CppObject
	{
	public:
		::System::Int32 _X_k__BackingField; // 0x10
		::System::Int32 _Y_k__BackingField; // 0x14

		::System::Int32 get_X()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASURECELL_GET_X_OFFSET))(nullptr);
		}

		::System::Void set_X(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASURECELL_SET_X_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Y()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASURECELL_GET_Y_OFFSET))(nullptr);
		}

		::System::Void set_Y(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASURECELL_SET_Y_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASURECELL_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::MX::GameLogic::DBModel::EventContentTreasureCell* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::EventContentTreasureCell*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASURECELL_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASURECELL_EQUALS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASURECELL_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASURECELL_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

