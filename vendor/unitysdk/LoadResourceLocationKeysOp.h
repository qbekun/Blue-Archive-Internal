#pragma once
#include "unitysdk.h"

namespace UnityEngine::AddressableAssets { class AddressablesImpl; }

#define LOADRESOURCELOCATIONKEYSOP_INVOKEWAITFORCOMPLETION_OFFSET UNITYSDK_OFFSET(0x9E09D70)
#define LOADRESOURCELOCATIONKEYSOP_EXECUTE_OFFSET UNITYSDK_OFFSET(0x9E09DE0)
#define LOADRESOURCELOCATIONKEYSOP_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E050B0)
#define LOADRESOURCELOCATIONKEYSOP_GET_DEBUGNAME_OFFSET UNITYSDK_OFFSET(0x9E09EE0)
#define LOADRESOURCELOCATIONKEYSOP_INIT_OFFSET UNITYSDK_OFFSET(0x9E050F0)

	inline static constexpr unsigned int LoadResourceLocationKeysOp_TypeDefinitionIndex = 36164;

	class LoadResourceLocationKeysOp : public ::FlatData::KatakanaConvertExcel
	{
	public:
		::System::Collections::IEnumerable* m_Key; // 0x88
		MergeMode* m_MergeMode; // 0x90
		Il2CppObject* m_locations; // 0x98
		::UnityEngine::AddressableAssets::AddressablesImpl* m_Addressables; // 0xA0
		::System::Type* m_ResourceType; // 0xA8

		::System::Boolean InvokeWaitForCompletion()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOADRESOURCELOCATIONKEYSOP_INVOKEWAITFORCOMPLETION_OFFSET))(nullptr);
		}

		::System::Void Execute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOADRESOURCELOCATIONKEYSOP_EXECUTE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOADRESOURCELOCATIONKEYSOP_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_DebugName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOADRESOURCELOCATIONKEYSOP_GET_DEBUGNAME_OFFSET))(nullptr);
		}

		::System::Void Init(::UnityEngine::AddressableAssets::AddressablesImpl* arg, ::System::Type* arg, ::System::Collections::IEnumerable* arg, MergeMode* arg)
		{
			((::System::Void(*)(::UnityEngine::AddressableAssets::AddressablesImpl*, ::System::Type*, ::System::Collections::IEnumerable*, MergeMode*, ::PVOID))((::PBYTE)hIl2Cpp + LOADRESOURCELOCATIONKEYSOP_INIT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};

