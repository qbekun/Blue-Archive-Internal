#pragma once
#include "../../../unitysdk.h"

namespace MX::Conquest::ConquestTileMapEvent { class ConquestTriggerType; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestDisplayType; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestDisplayInfo; }

#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTDISPLAYINFO_GET_TRIGGERTYPE_OFFSET UNITYSDK_OFFSET(0x142DC00)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTDISPLAYINFO_SET_TRIGGERTYPE_OFFSET UNITYSDK_OFFSET(0x142DC10)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTDISPLAYINFO_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x142DC20)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTDISPLAYINFO_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x142DC30)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTDISPLAYINFO_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x142DC40)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTDISPLAYINFO_SET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x142DC50)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTDISPLAYINFO_GET_TILEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x142DC60)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTDISPLAYINFO_SET_TILEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x142DC70)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTDISPLAYINFO_GET_PARAMETER_OFFSET UNITYSDK_OFFSET(0x142DC80)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTDISPLAYINFO_SET_PARAMETER_OFFSET UNITYSDK_OFFSET(0x142DC90)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTDISPLAYINFO_GET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x142DCA0)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTDISPLAYINFO_SET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x142DCB0)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTDISPLAYINFO_GET_DISPLAYONCE_OFFSET UNITYSDK_OFFSET(0x142DCC0)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTDISPLAYINFO_SET_DISPLAYONCE_OFFSET UNITYSDK_OFFSET(0x142DCD0)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTDISPLAYINFO_GETPARAMETERASLONG_OFFSET UNITYSDK_OFFSET(0x142DCE0)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTDISPLAYINFO_GETPARAMETERASBOOL_OFFSET UNITYSDK_OFFSET(0x142DD20)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTDISPLAYINFO_GETPARAMETERASENUM_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTDISPLAYINFO_COMPARETO_OFFSET UNITYSDK_OFFSET(0x142DD80)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTDISPLAYINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x142B620)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTDISPLAYINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x142DE40)

namespace MX::Conquest::ConquestTileMapEvent
{
	inline static constexpr unsigned int ConquestDisplayInfo_TypeDefinitionIndex = 14875;

	class ConquestDisplayInfo : public Il2CppObject
	{
	public:
		::MX::Conquest::ConquestTileMapEvent::ConquestTriggerType* _TriggerType_k__BackingField; // 0x10
		::MX::Conquest::ConquestTileMapEvent::ConquestDisplayType* _Type_k__BackingField; // 0x14
		::System::Int64 _EntityId_k__BackingField; // 0x18
		::System::Int64 _TileUniqueId_k__BackingField; // 0x20
		::System::String* _Parameter_k__BackingField; // 0x28
		::System::Int32 _DisplayOrder_k__BackingField; // 0x30
		::System::Boolean _DisplayOnce_k__BackingField; // 0x34

		::MX::Conquest::ConquestTileMapEvent::ConquestTriggerType* get_TriggerType()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestTriggerType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTDISPLAYINFO_GET_TRIGGERTYPE_OFFSET))(nullptr);
		}

		::System::Void set_TriggerType(::MX::Conquest::ConquestTileMapEvent::ConquestTriggerType* arg)
		{
			((::System::Void(*)(::MX::Conquest::ConquestTileMapEvent::ConquestTriggerType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTDISPLAYINFO_SET_TRIGGERTYPE_OFFSET))(arg, nullptr);
		}

		::MX::Conquest::ConquestTileMapEvent::ConquestDisplayType* get_Type()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestDisplayType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTDISPLAYINFO_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void set_Type(::MX::Conquest::ConquestTileMapEvent::ConquestDisplayType* arg)
		{
			((::System::Void(*)(::MX::Conquest::ConquestTileMapEvent::ConquestDisplayType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTDISPLAYINFO_SET_TYPE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EntityId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTDISPLAYINFO_GET_ENTITYID_OFFSET))(nullptr);
		}

		::System::Void set_EntityId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTDISPLAYINFO_SET_ENTITYID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TileUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTDISPLAYINFO_GET_TILEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_TileUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTDISPLAYINFO_SET_TILEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::String* get_Parameter()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTDISPLAYINFO_GET_PARAMETER_OFFSET))(nullptr);
		}

		::System::Void set_Parameter(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTDISPLAYINFO_SET_PARAMETER_OFFSET))(str, nullptr);
		}

		::System::Int32 get_DisplayOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTDISPLAYINFO_GET_DISPLAYORDER_OFFSET))(nullptr);
		}

		::System::Void set_DisplayOrder(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTDISPLAYINFO_SET_DISPLAYORDER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_DisplayOnce()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTDISPLAYINFO_GET_DISPLAYONCE_OFFSET))(nullptr);
		}

		::System::Void set_DisplayOnce(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTDISPLAYINFO_SET_DISPLAYONCE_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetParameterAsLong()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTDISPLAYINFO_GETPARAMETERASLONG_OFFSET))(nullptr);
		}

		::System::Boolean GetParameterAsBool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTDISPLAYINFO_GETPARAMETERASBOOL_OFFSET))(nullptr);
		}

		Il2CppObject* GetParameterAsEnum()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTDISPLAYINFO_GETPARAMETERASENUM_OFFSET))(nullptr);
		}

		::System::Int32 CompareTo(::System::Object* arg)
		{
			return ((::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTDISPLAYINFO_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTDISPLAYINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo* arg)
		{
			((::System::Void(*)(::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTDISPLAYINFO_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

