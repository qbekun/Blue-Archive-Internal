#pragma once
#include "../../unitysdk.h"

namespace MXField::Dispatch { class DispatchType; }

#define MXFIELD_DISPATCH_DISPATCHDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xEC8DD0)
#define MXFIELD_DISPATCH_DISPATCHDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0xEC8EE0)
#define MXFIELD_DISPATCH_DISPATCHDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xEC8EF0)
#define MXFIELD_DISPATCH_DISPATCHDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xEC8F20)

namespace MXField::Dispatch
{
	inline static constexpr unsigned int DispatchDelegate_TypeDefinitionIndex = 10900;

	class DispatchDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DISPATCH_DISPATCHDELEGATE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Invoke(::MXField::Dispatch::DispatchType* arg)
		{
			return ((::System::Boolean(*)(::MXField::Dispatch::DispatchType*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DISPATCH_DISPATCHDELEGATE_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* arg)
		{
			return ((::System::Boolean(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DISPATCH_DISPATCHDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::MXField::Dispatch::DispatchType* arg, ::System::AsyncCallback* arg2, ::System::Object* arg3)
		{
			return ((::System::IAsyncResult*(*)(::MXField::Dispatch::DispatchType*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DISPATCH_DISPATCHDELEGATE_BEGININVOKE_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

