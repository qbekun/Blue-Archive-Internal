#pragma once
#include "unitysdk.h"

#define SKELETONUTILITYDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x96188A0)
#define SKELETONUTILITYDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x96188B0)
#define SKELETONUTILITYDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9618970)
#define SKELETONUTILITYDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9618980)

	inline static constexpr unsigned int SkeletonUtilityDelegate_TypeDefinitionIndex = 35334;

	class SkeletonUtilityDelegate : public Il2CppObject
	{
	public:
		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SKELETONUTILITYDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SKELETONUTILITYDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKELETONUTILITYDELEGATE_INVOKE_OFFSET))(nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SKELETONUTILITYDELEGATE_BEGININVOKE_OFFSET))(arg, arg, nullptr);
		}

	};

