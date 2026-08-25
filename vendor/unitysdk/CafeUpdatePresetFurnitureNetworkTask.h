#pragma once
#include "unitysdk.h"

namespace FlatData { class CafePresetType; }
namespace MX::NetworkProtocol { class Protocol; }

#define CAFEUPDATEPRESETFURNITURENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F15490)
#define CAFEUPDATEPRESETFURNITURENETWORKTASK_GET_PRESETTYPE_OFFSET UNITYSDK_OFFSET(0x1F154A0)
#define CAFEUPDATEPRESETFURNITURENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F154B0)
#define CAFEUPDATEPRESETFURNITURENETWORKTASK_SET_SLOTID_OFFSET UNITYSDK_OFFSET(0x1F154C0)
#define CAFEUPDATEPRESETFURNITURENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F154D0)
#define CAFEUPDATEPRESETFURNITURENETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F15700)
#define CAFEUPDATEPRESETFURNITURENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F15710)
#define CAFEUPDATEPRESETFURNITURENETWORKTASK_GET_SLOTID_OFFSET UNITYSDK_OFFSET(0x1F157A0)
#define CAFEUPDATEPRESETFURNITURENETWORKTASK_SET_PRESETTYPE_OFFSET UNITYSDK_OFFSET(0x1F157B0)

	inline static constexpr unsigned int CafeUpdatePresetFurnitureNetworkTask_TypeDefinitionIndex = 2057;

	class CafeUpdatePresetFurnitureNetworkTask : public Il2CppObject
	{
	public:
		::FlatData::CafePresetType* _PresetType_k__BackingField; // 0x40
		::System::Int32 _SlotId_k__BackingField; // 0x44

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEUPDATEPRESETFURNITURENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::FlatData::CafePresetType* get_PresetType()
		{
			return ((::FlatData::CafePresetType*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEUPDATEPRESETFURNITURENETWORKTASK_GET_PRESETTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEUPDATEPRESETFURNITURENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_SlotId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CAFEUPDATEPRESETFURNITURENETWORKTASK_SET_SLOTID_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEUPDATEPRESETFURNITURENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEUPDATEPRESETFURNITURENETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEUPDATEPRESETFURNITURENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Int32 get_SlotId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEUPDATEPRESETFURNITURENETWORKTASK_GET_SLOTID_OFFSET))(nullptr);
		}

		::System::Void set_PresetType(::FlatData::CafePresetType* arg)
		{
			((::System::Void(*)(::FlatData::CafePresetType*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEUPDATEPRESETFURNITURENETWORKTASK_SET_PRESETTYPE_OFFSET))(arg, nullptr);
		}

	};

