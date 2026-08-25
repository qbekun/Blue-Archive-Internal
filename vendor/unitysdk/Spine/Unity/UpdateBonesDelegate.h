#pragma once
#include "../../unitysdk.h"

namespace Spine::Unity { class ISkeletonAnimation; }

#define SPINE_UNITY_UPDATEBONESDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9619050)
#define SPINE_UNITY_UPDATEBONESDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9619060)
#define SPINE_UNITY_UPDATEBONESDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9615F40)
#define SPINE_UNITY_UPDATEBONESDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9619090)

namespace Spine::Unity
{
	inline static constexpr unsigned int UpdateBonesDelegate_TypeDefinitionIndex = 35343;

	class UpdateBonesDelegate : public Il2CppObject
	{
	public:
		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_UPDATEBONESDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::Spine::Unity::ISkeletonAnimation* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::Spine::Unity::ISkeletonAnimation*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_UPDATEBONESDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_UPDATEBONESDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::Spine::Unity::ISkeletonAnimation* arg)
		{
			((::System::Void(*)(::Spine::Unity::ISkeletonAnimation*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_UPDATEBONESDELEGATE_INVOKE_OFFSET))(arg, nullptr);
		}

	};
}

