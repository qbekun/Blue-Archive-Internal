#pragma once
#include "unitysdk.h"

namespace FlatData { class EchelonExtensionType; }
namespace MX::NetworkProtocol { class Protocol; }

#define ECHELONPRESETGROUPRENAMENETWORKTASK_GET_PRESETGROUPINDEX_OFFSET UNITYSDK_OFFSET(0x1F594E0)
#define ECHELONPRESETGROUPRENAMENETWORKTASK_SET_EXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0x1F594F0)
#define ECHELONPRESETGROUPRENAMENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F59500)
#define ECHELONPRESETGROUPRENAMENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F59710)
#define ECHELONPRESETGROUPRENAMENETWORKTASK_SET_PRESETGROUPINDEX_OFFSET UNITYSDK_OFFSET(0x1F59720)
#define ECHELONPRESETGROUPRENAMENETWORKTASK_SET_PRESETGROUPLABEL_OFFSET UNITYSDK_OFFSET(0x1F59730)
#define ECHELONPRESETGROUPRENAMENETWORKTASK_GET_PRESETGROUPLABEL_OFFSET UNITYSDK_OFFSET(0x1F59740)
#define ECHELONPRESETGROUPRENAMENETWORKTASK_GET_EXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0x1F59750)
#define ECHELONPRESETGROUPRENAMENETWORKTASK__PROCESSSESSION_B__12_0_OFFSET UNITYSDK_OFFSET(0x1F59760)
#define ECHELONPRESETGROUPRENAMENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F59770)
#define ECHELONPRESETGROUPRENAMENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F59800)

	inline static constexpr unsigned int EchelonPresetGroupRenameNetworkTask_TypeDefinitionIndex = 2348;

	class EchelonPresetGroupRenameNetworkTask : public Il2CppObject
	{
	public:
		::System::Int32 _PresetGroupIndex_k__BackingField; // 0x40
		::System::String* _PresetGroupLabel_k__BackingField; // 0x48
		::FlatData::EchelonExtensionType* _ExtensionType_k__BackingField; // 0x50

		::System::Int32 get_PresetGroupIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHELONPRESETGROUPRENAMENETWORKTASK_GET_PRESETGROUPINDEX_OFFSET))(nullptr);
		}

		::System::Void set_ExtensionType(::FlatData::EchelonExtensionType* arg)
		{
			((::System::Void(*)(::FlatData::EchelonExtensionType*, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONPRESETGROUPRENAMENETWORKTASK_SET_EXTENSIONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONPRESETGROUPRENAMENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHELONPRESETGROUPRENAMENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_PresetGroupIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONPRESETGROUPRENAMENETWORKTASK_SET_PRESETGROUPINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void set_PresetGroupLabel(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONPRESETGROUPRENAMENETWORKTASK_SET_PRESETGROUPLABEL_OFFSET))(str, nullptr);
		}

		::System::String* get_PresetGroupLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHELONPRESETGROUPRENAMENETWORKTASK_GET_PRESETGROUPLABEL_OFFSET))(nullptr);
		}

		::FlatData::EchelonExtensionType* get_ExtensionType()
		{
			return ((::FlatData::EchelonExtensionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHELONPRESETGROUPRENAMENETWORKTASK_GET_EXTENSIONTYPE_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__12_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHELONPRESETGROUPRENAMENETWORKTASK__PROCESSSESSION_B__12_0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHELONPRESETGROUPRENAMENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHELONPRESETGROUPRENAMENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

	};

