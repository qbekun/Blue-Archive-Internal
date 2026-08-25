#pragma once
#include "unitysdk.h"

namespace UnityEngine::Rendering::Universal { class DecalProjector; }

#define DECALPROJECTORACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA03CA30)
#define DECALPROJECTORACTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA03CB40)
#define DECALPROJECTORACTION_INVOKE_OFFSET UNITYSDK_OFFSET(0xA03CB50)
#define DECALPROJECTORACTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA03CB60)

	inline static constexpr unsigned int DecalProjectorAction_TypeDefinitionIndex = 32599;

	class DecalProjectorAction : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DECALPROJECTORACTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + DECALPROJECTORACTION_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void Invoke(::UnityEngine::Rendering::Universal::DecalProjector* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::DecalProjector*, ::PVOID))((::PBYTE)hIl2Cpp + DECALPROJECTORACTION_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Rendering::Universal::DecalProjector* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::UnityEngine::Rendering::Universal::DecalProjector*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + DECALPROJECTORACTION_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

	};

