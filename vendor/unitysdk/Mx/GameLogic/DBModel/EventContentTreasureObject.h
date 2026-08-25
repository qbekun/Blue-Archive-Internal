#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class EventContentTreasureObject; }

#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREOBJECT_GET_SERVERID_OFFSET UNITYSDK_OFFSET(0xFFDF00)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREOBJECT_SET_SERVERID_OFFSET UNITYSDK_OFFSET(0xFFDF10)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREOBJECT_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0xFFDF20)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREOBJECT_SET_REWARDID_OFFSET UNITYSDK_OFFSET(0xFFDF30)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREOBJECT_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0xFFDF40)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREOBJECT_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0xFFDF50)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREOBJECT_GET_ISHIDDENIMAGE_OFFSET UNITYSDK_OFFSET(0xFFDF60)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREOBJECT_SET_ISHIDDENIMAGE_OFFSET UNITYSDK_OFFSET(0xFFDF70)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREOBJECT_GET_CELLS_OFFSET UNITYSDK_OFFSET(0xFFDF80)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREOBJECT_SET_CELLS_OFFSET UNITYSDK_OFFSET(0xFFDF90)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0xFFDFA0)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREOBJECT_ISFOUNDCELL_OFFSET UNITYSDK_OFFSET(0xFFDE20)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREOBJECT_ISFOUNDALL_OFFSET UNITYSDK_OFFSET(0xFFE010)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREOBJECT_ISFOUNDALL_OFFSET UNITYSDK_OFFSET(0xFFE100)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREOBJECT__ISFOUNDALL_B__23_0_OFFSET UNITYSDK_OFFSET(0xFFE1C0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int EventContentTreasureObject_TypeDefinitionIndex = 12619;

	class EventContentTreasureObject : public Il2CppObject
	{
	public:
		::System::Int64 _ServerId_k__BackingField; // 0x10
		::System::Int64 _RewardId_k__BackingField; // 0x18
		::System::Int32 _Rotation_k__BackingField; // 0x20
		::System::Boolean _IsHiddenImage_k__BackingField; // 0x24
		Il2CppObject* _Cells_k__BackingField; // 0x28

		::System::Int64 get_ServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREOBJECT_GET_SERVERID_OFFSET))(nullptr);
		}

		::System::Void set_ServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREOBJECT_SET_SERVERID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_RewardId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREOBJECT_GET_REWARDID_OFFSET))(nullptr);
		}

		::System::Void set_RewardId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREOBJECT_SET_REWARDID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Rotation()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREOBJECT_GET_ROTATION_OFFSET))(nullptr);
		}

		::System::Void set_Rotation(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREOBJECT_SET_ROTATION_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsHiddenImage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREOBJECT_GET_ISHIDDENIMAGE_OFFSET))(nullptr);
		}

		::System::Void set_IsHiddenImage(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREOBJECT_SET_ISHIDDENIMAGE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Cells()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREOBJECT_GET_CELLS_OFFSET))(nullptr);
		}

		::System::Void set_Cells(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREOBJECT_SET_CELLS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Int64 arg2, ::System::Int32 arg3, ::System::Boolean arg4, Il2CppObject* arg5)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Int32, ::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREOBJECT_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Boolean IsFoundCell(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREOBJECT_ISFOUNDCELL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsFoundAll(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREOBJECT_ISFOUNDALL_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsFoundAll(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREOBJECT_ISFOUNDALL_OFFSET))(arg, nullptr);
		}

		::System::Boolean _IsFoundAll_b__23_0(::MX::GameLogic::DBModel::EventContentTreasureObject* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::EventContentTreasureObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREOBJECT__ISFOUNDALL_B__23_0_OFFSET))(arg, nullptr);
		}

	};
}

