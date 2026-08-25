#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_MERGEFAILEDEVENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9767DA0)
#define SYSTEM_DATA_MERGEFAILEDEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x9767EB0)

namespace System::Data
{
	inline static constexpr unsigned int MergeFailedEventHandler_TypeDefinitionIndex = 32273;

	class MergeFailedEventHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_MERGEFAILEDEVENTHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object* arg, ::System::Data::MergeFailedEventArgs* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Data::MergeFailedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_MERGEFAILEDEVENTHANDLER_INVOKE_OFFSET))(arg, arg, nullptr);
		}

	};
}

