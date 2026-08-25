#pragma once
#include "../../unitysdk.h"

namespace Spine::Unity { class MeshGeneratorBuffers; }

#define SPINE_UNITY_MESHGENERATORDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9619130)
#define SPINE_UNITY_MESHGENERATORDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9615E70)
#define SPINE_UNITY_MESHGENERATORDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x96191A0)
#define SPINE_UNITY_MESHGENERATORDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x96191E0)

namespace Spine::Unity
{
	inline static constexpr unsigned int MeshGeneratorDelegate_TypeDefinitionIndex = 35353;

	class MeshGeneratorDelegate : public Il2CppObject
	{
	public:
		::System::IAsyncResult* BeginInvoke(::Spine::Unity::MeshGeneratorBuffers* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::Spine::Unity::MeshGeneratorBuffers*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATORDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATORDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::Spine::Unity::MeshGeneratorBuffers* arg)
		{
			((::System::Void(*)(::Spine::Unity::MeshGeneratorBuffers*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATORDELEGATE_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATORDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};
}

