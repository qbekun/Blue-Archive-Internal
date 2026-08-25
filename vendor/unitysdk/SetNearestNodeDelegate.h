#pragma once
#include "unitysdk.h"

class GroundNode;

#define SETNEARESTNODEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x10E9D30)
#define SETNEARESTNODEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x10E9D40)
#define SETNEARESTNODEDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x10E9D70)
#define SETNEARESTNODEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x10E9E80)

	inline static constexpr unsigned int SetNearestNodeDelegate_TypeDefinitionIndex = 12998;

	class SetNearestNodeDelegate : public Il2CppObject
	{
	public:
		::System::Void Invoke(GroundNode* arg)
		{
			((::System::Void(*)(GroundNode*, ::PVOID))((::PBYTE)hIl2Cpp + SETNEARESTNODEDELEGATE_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(GroundNode* arg, ::System::AsyncCallback* arg2, ::System::Object* arg3)
		{
			return ((::System::IAsyncResult*(*)(GroundNode*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SETNEARESTNODEDELEGATE_BEGININVOKE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SETNEARESTNODEDELEGATE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SETNEARESTNODEDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

