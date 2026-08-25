#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define EQUIPMENTLEVELUPNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F60880)
#define EQUIPMENTLEVELUPNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F60890)
#define EQUIPMENTLEVELUPNETWORKTASK_GET_TARGETSERVERID_OFFSET UNITYSDK_OFFSET(0x1F60BF0)
#define EQUIPMENTLEVELUPNETWORKTASK_SET_INGREDIENTS_OFFSET UNITYSDK_OFFSET(0x1F60C00)
#define EQUIPMENTLEVELUPNETWORKTASK_GET_INGREDIENTS_OFFSET UNITYSDK_OFFSET(0x1F60C10)
#define EQUIPMENTLEVELUPNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F60C20)
#define EQUIPMENTLEVELUPNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F60C30)
#define EQUIPMENTLEVELUPNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F60C40)
#define EQUIPMENTLEVELUPNETWORKTASK_SET_TARGETSERVERID_OFFSET UNITYSDK_OFFSET(0x1F60CD0)

	inline static constexpr unsigned int EquipmentLevelUpNetworkTask_TypeDefinitionIndex = 2395;

	class EquipmentLevelUpNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _TargetServerId_k__BackingField; // 0x40
		Il2CppObject* _Ingredients_k__BackingField; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTLEVELUPNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTLEVELUPNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Int64 get_TargetServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTLEVELUPNETWORKTASK_GET_TARGETSERVERID_OFFSET))(nullptr);
		}

		::System::Void set_Ingredients(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTLEVELUPNETWORKTASK_SET_INGREDIENTS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Ingredients()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTLEVELUPNETWORKTASK_GET_INGREDIENTS_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTLEVELUPNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTLEVELUPNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTLEVELUPNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void set_TargetServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTLEVELUPNETWORKTASK_SET_TARGETSERVERID_OFFSET))(arg, nullptr);
		}

	};

