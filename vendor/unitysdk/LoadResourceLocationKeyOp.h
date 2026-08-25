#pragma once
#include "unitysdk.h"

namespace UnityEngine::AddressableAssets { class AddressablesImpl; }

#define LOADRESOURCELOCATIONKEYOP_INIT_OFFSET UNITYSDK_OFFSET(0x9E05300)
#define LOADRESOURCELOCATIONKEYOP_INVOKEWAITFORCOMPLETION_OFFSET UNITYSDK_OFFSET(0x9E09BE0)
#define LOADRESOURCELOCATIONKEYOP_EXECUTE_OFFSET UNITYSDK_OFFSET(0x9E09C50)
#define LOADRESOURCELOCATIONKEYOP_GET_DEBUGNAME_OFFSET UNITYSDK_OFFSET(0x9E09D40)
#define LOADRESOURCELOCATIONKEYOP_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E052C0)

	inline static constexpr unsigned int LoadResourceLocationKeyOp_TypeDefinitionIndex = 36163;

	class LoadResourceLocationKeyOp : public ::FlatData::KatakanaConvertExcel
	{
	public:
		::System::Object* m_Keys; // 0x88
		Il2CppObject* m_locations; // 0x90
		::UnityEngine::AddressableAssets::AddressablesImpl* m_Addressables; // 0x98
		::System::Type* m_ResourceType; // 0xA0

		::System::Void Init(::UnityEngine::AddressableAssets::AddressablesImpl* arg, ::System::Type* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::AddressableAssets::AddressablesImpl*, ::System::Type*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + LOADRESOURCELOCATIONKEYOP_INIT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean InvokeWaitForCompletion()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOADRESOURCELOCATIONKEYOP_INVOKEWAITFORCOMPLETION_OFFSET))(nullptr);
		}

		::System::Void Execute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOADRESOURCELOCATIONKEYOP_EXECUTE_OFFSET))(nullptr);
		}

		::System::String* get_DebugName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOADRESOURCELOCATIONKEYOP_GET_DEBUGNAME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOADRESOURCELOCATIONKEYOP_.CTOR_OFFSET))(nullptr);
		}

	};

