#pragma once
#include "../../unitysdk.h"

namespace FlatData { class CCGEntityType; }
namespace MX::MinigameCCG { class CCGEntity; }

#define MX_MINIGAMECCG_CCGLOGENTITY_SET_ACTIVECOST_OFFSET UNITYSDK_OFFSET(0x1DC5040)
#define MX_MINIGAMECCG_CCGLOGENTITY_GET_ACTIVECOST_OFFSET UNITYSDK_OFFSET(0x1DC5050)
#define MX_MINIGAMECCG_CCGLOGENTITY_SET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x1DC5060)
#define MX_MINIGAMECCG_CCGLOGENTITY_GET_HEALTH_OFFSET UNITYSDK_OFFSET(0x1DC5070)
#define MX_MINIGAMECCG_CCGLOGENTITY_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1DC5080)
#define MX_MINIGAMECCG_CCGLOGENTITY_SET_ID_OFFSET UNITYSDK_OFFSET(0x1DC5090)
#define MX_MINIGAMECCG_CCGLOGENTITY_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x1DC50A0)
#define MX_MINIGAMECCG_CCGLOGENTITY_GET_ISALLY_OFFSET UNITYSDK_OFFSET(0x1DC50B0)
#define MX_MINIGAMECCG_CCGLOGENTITY_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1DC50C0)
#define MX_MINIGAMECCG_CCGLOGENTITY_GET_ID_OFFSET UNITYSDK_OFFSET(0x1DC50D0)
#define MX_MINIGAMECCG_CCGLOGENTITY_SET_HEALTH_OFFSET UNITYSDK_OFFSET(0x1DC50E0)
#define MX_MINIGAMECCG_CCGLOGENTITY_SET_ISALLY_OFFSET UNITYSDK_OFFSET(0x1DC50F0)
#define MX_MINIGAMECCG_CCGLOGENTITY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DC5100)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGLogEntity_TypeDefinitionIndex = 20483;

	class CCGLogEntity : public Il2CppObject
	{
	public:
		::FlatData::CCGEntityType* _Type_k__BackingField; // 0x10
		::System::Int64 _Id_k__BackingField; // 0x18
		::System::Int32 _EntityId_k__BackingField; // 0x20
		::System::Int32 _Health_k__BackingField; // 0x24
		::System::Int32 _ActiveCost_k__BackingField; // 0x28
		::System::Boolean _IsAlly_k__BackingField; // 0x2C

		::System::Void set_ActiveCost(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGLOGENTITY_SET_ACTIVECOST_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ActiveCost()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGLOGENTITY_GET_ACTIVECOST_OFFSET))(nullptr);
		}

		::System::Void set_EntityId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGLOGENTITY_SET_ENTITYID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Health()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGLOGENTITY_GET_HEALTH_OFFSET))(nullptr);
		}

		::System::Void set_Type(::FlatData::CCGEntityType* arg)
		{
			((::System::Void(*)(::FlatData::CCGEntityType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGLOGENTITY_SET_TYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGLOGENTITY_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_EntityId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGLOGENTITY_GET_ENTITYID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsAlly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGLOGENTITY_GET_ISALLY_OFFSET))(nullptr);
		}

		::FlatData::CCGEntityType* get_Type()
		{
			return (return (::FlatData::CCGEntityType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGLOGENTITY_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGLOGENTITY_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_Health(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGLOGENTITY_SET_HEALTH_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsAlly(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGLOGENTITY_SET_ISALLY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGEntity* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGLOGENTITY_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

