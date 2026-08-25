#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::ResourceManagement::Diagnostics { class DiagnosticEvent; }

#define UNITYENGINE_ADDRESSABLEASSETS_UTILITY_DIAGNOSTICINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E0FCB0)
#define UNITYENGINE_ADDRESSABLEASSETS_UTILITY_DIAGNOSTICINFO_CREATEEVENT_OFFSET UNITYSDK_OFFSET(0x9E0FCC0)

namespace UnityEngine::AddressableAssets::Utility
{
	inline static constexpr unsigned int DiagnosticInfo_TypeDefinitionIndex = 36211;

	class DiagnosticInfo : public Il2CppObject
	{
	public:
		::System::String* DisplayName; // 0x10
		::System::Int32 ObjectId; // 0x18
		::Il2CppArray<::System::Object*>* Dependencies; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_UTILITY_DIAGNOSTICINFO_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent* CreateEvent(::System::String* str, DiagnosticEventType* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent*(*)(::System::String*, DiagnosticEventType*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_UTILITY_DIAGNOSTICINFO_CREATEEVENT_OFFSET))(str, arg, arg, arg, nullptr);
		}

	};
}

