#pragma once
#include "../../../unitysdk.h"

#define MICROSOFT_CSHARP_RUNTIMEBINDER_ERROR_INTERNALCOMPILERERROR_OFFSET UNITYSDK_OFFSET(0x90854B0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_ERROR_BINDPROPERTYFAILEDMETHODGROUP_OFFSET UNITYSDK_OFFSET(0x90855B0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_ERROR_BINDPROPERTYFAILEDEVENT_OFFSET UNITYSDK_OFFSET(0x9085740)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_ERROR_BINDINVOKEFAILEDNONDELEGATE_OFFSET UNITYSDK_OFFSET(0x9085870)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_ERROR_BINDSTATICREQUIRESTYPE_OFFSET UNITYSDK_OFFSET(0x9085910)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_ERROR_NULLREFERENCEONMEMBEREXCEPTION_OFFSET UNITYSDK_OFFSET(0x9085980)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_ERROR_BINDCALLTOCONDITIONALMETHOD_OFFSET UNITYSDK_OFFSET(0x9085A20)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_ERROR_BINDTOVOIDMETHODBUTEXPECTRESULT_OFFSET UNITYSDK_OFFSET(0x9082070)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_ERROR_ARGUMENTNULL_OFFSET UNITYSDK_OFFSET(0x9081CF0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_ERROR_DYNAMICARGUMENTNEEDSVALUE_OFFSET UNITYSDK_OFFSET(0x9081D50)

namespace Microsoft::CSharp::RuntimeBinder
{
	inline static constexpr unsigned int Error_TypeDefinitionIndex = 34436;

	class Error : public Il2CppObject
	{
	public:
		::System::Exception* InternalCompilerError()
		{
			return (return (::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ERROR_INTERNALCOMPILERERROR_OFFSET))(nullptr);
		}

		::System::Exception* BindPropertyFailedMethodGroup(::System::Object* arg)
		{
			return (return (::System::Exception*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ERROR_BINDPROPERTYFAILEDMETHODGROUP_OFFSET))(arg, nullptr);
		}

		::System::Exception* BindPropertyFailedEvent(::System::Object* arg)
		{
			return (return (::System::Exception*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ERROR_BINDPROPERTYFAILEDEVENT_OFFSET))(arg, nullptr);
		}

		::System::Exception* BindInvokeFailedNonDelegate()
		{
			return (return (::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ERROR_BINDINVOKEFAILEDNONDELEGATE_OFFSET))(nullptr);
		}

		::System::Exception* BindStaticRequiresType(::System::String* str)
		{
			return (return (::System::Exception*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ERROR_BINDSTATICREQUIRESTYPE_OFFSET))(str, nullptr);
		}

		::System::Exception* NullReferenceOnMemberException()
		{
			return (return (::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ERROR_NULLREFERENCEONMEMBEREXCEPTION_OFFSET))(nullptr);
		}

		::System::Exception* BindCallToConditionalMethod(::System::Object* arg)
		{
			return (return (::System::Exception*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ERROR_BINDCALLTOCONDITIONALMETHOD_OFFSET))(arg, nullptr);
		}

		::System::Exception* BindToVoidMethodButExpectResult()
		{
			return (return (::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ERROR_BINDTOVOIDMETHODBUTEXPECTRESULT_OFFSET))(nullptr);
		}

		::System::Exception* ArgumentNull(::System::String* str)
		{
			return (return (::System::Exception*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ERROR_ARGUMENTNULL_OFFSET))(str, nullptr);
		}

		::System::Exception* DynamicArgumentNeedsValue(::System::String* str)
		{
			return (return (::System::Exception*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ERROR_DYNAMICARGUMENTNEEDSVALUE_OFFSET))(str, nullptr);
		}

	};
}

