#pragma once
#include "unitysdk.h"

namespace UnityEngine { class RaycastHit; }
namespace UnityEngine { class Object; }

#define RAYCASTHITPROCESSERDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9581060)
#define RAYCASTHITPROCESSERDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x95810D0)
#define RAYCASTHITPROCESSERDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x95810E0)
#define RAYCASTHITPROCESSERDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9581120)

	inline static constexpr unsigned int RaycastHitProcesserDelegate_TypeDefinitionIndex = 35687;

	class RaycastHitProcesserDelegate : public Il2CppObject
	{
	public:
		::System::IAsyncResult* BeginInvoke(::UnityEngine::RaycastHit* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::UnityEngine::RaycastHit*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + RAYCASTHITPROCESSERDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Object* EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (::UnityEngine::Object*(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + RAYCASTHITPROCESSERDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Object* Invoke(::UnityEngine::RaycastHit* arg)
		{
			return (return (::UnityEngine::Object*(*)(::UnityEngine::RaycastHit*, ::PVOID))((::PBYTE)hIl2Cpp + RAYCASTHITPROCESSERDELEGATE_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RAYCASTHITPROCESSERDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};

