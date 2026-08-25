#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }

#define ASYNCHANDLER_RELEASE_OFFSET UNITYSDK_OFFSET(0x1D9EEC0)
#define ASYNCHANDLER_SET_NEEDDESTROY_OFFSET UNITYSDK_OFFSET(0x1D9EF60)
#define ASYNCHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D9EF70)
#define ASYNCHANDLER_GET_NEEDDESTROY_OFFSET UNITYSDK_OFFSET(0x1D9EF80)

	inline static constexpr unsigned int AsyncHandler_TypeDefinitionIndex = 20379;

	class AsyncHandler : public Il2CppObject
	{
	public:
		::System::Boolean _NeedDestroy_k__BackingField; // 0x10
		::UnityEngine::GameObject* Result; // 0x18

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASYNCHANDLER_RELEASE_OFFSET))(nullptr);
		}

		::System::Void set_NeedDestroy(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ASYNCHANDLER_SET_NEEDDESTROY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASYNCHANDLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_NeedDestroy()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ASYNCHANDLER_GET_NEEDDESTROY_OFFSET))(nullptr);
		}

	};

