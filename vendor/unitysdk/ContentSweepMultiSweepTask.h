#pragma once
#include "unitysdk.h"

namespace FlatData { class ContentType; }
namespace MX::NetworkProtocol { class Protocol; }

#define CONTENTSWEEPMULTISWEEPTASK_GET_MULTISWEEPPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1F36060)
#define CONTENTSWEEPMULTISWEEPTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F36070)
#define CONTENTSWEEPMULTISWEEPTASK_SET_MULTISWEEPPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1F36080)
#define CONTENTSWEEPMULTISWEEPTASK_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0x1F36090)
#define CONTENTSWEEPMULTISWEEPTASK_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x1F360A0)
#define CONTENTSWEEPMULTISWEEPTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F360B0)
#define CONTENTSWEEPMULTISWEEPTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F360C0)
#define CONTENTSWEEPMULTISWEEPTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F36150)
#define CONTENTSWEEPMULTISWEEPTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F36720)

	inline static constexpr unsigned int ContentSweepMultiSweepTask_TypeDefinitionIndex = 2270;

	class ContentSweepMultiSweepTask : public Il2CppObject
	{
	public:
		Il2CppObject* _MultiSweepParameters_k__BackingField; // 0x40
		::FlatData::ContentType* _Content_k__BackingField; // 0x48

		Il2CppObject* get_MultiSweepParameters()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTENTSWEEPMULTISWEEPTASK_GET_MULTISWEEPPARAMETERS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTENTSWEEPMULTISWEEPTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_MultiSweepParameters(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CONTENTSWEEPMULTISWEEPTASK_SET_MULTISWEEPPARAMETERS_OFFSET))(arg, nullptr);
		}

		::System::Void set_Content(::FlatData::ContentType* arg)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + CONTENTSWEEPMULTISWEEPTASK_SET_CONTENT_OFFSET))(arg, nullptr);
		}

		::FlatData::ContentType* get_Content()
		{
			return ((::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTENTSWEEPMULTISWEEPTASK_GET_CONTENT_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTENTSWEEPMULTISWEEPTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTENTSWEEPMULTISWEEPTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CONTENTSWEEPMULTISWEEPTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTENTSWEEPMULTISWEEPTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

	};

