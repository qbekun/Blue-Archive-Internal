#pragma once
#include "../../unitysdk.h"

#define MXFIELD_ACTIONS_FIELDCALLBACKWAITACTION_DOACTIONINTERNAL_OFFSET UNITYSDK_OFFSET(0xEECBC0)
#define MXFIELD_ACTIONS_FIELDCALLBACKWAITACTION_HANDLEACTIONFINISHED_OFFSET UNITYSDK_OFFSET(0xEECC50)
#define MXFIELD_ACTIONS_FIELDCALLBACKWAITACTION_COACTIONFINISHED_OFFSET UNITYSDK_OFFSET(0xEECD00)
#define MXFIELD_ACTIONS_FIELDCALLBACKWAITACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xEECD90)

namespace MXField::Actions
{
	inline static constexpr unsigned int FieldCallbackWaitAction_TypeDefinitionIndex = 11062;

	class FieldCallbackWaitAction : public Il2CppObject
	{
	public:
		::System::Collections::IEnumerator* DoActionInternal()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDCALLBACKWAITACTION_DOACTIONINTERNAL_OFFSET))(nullptr);
		}

		::System::Void HandleActionFinished()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDCALLBACKWAITACTION_HANDLEACTIONFINISHED_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoActionFinished()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDCALLBACKWAITACTION_COACTIONFINISHED_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Single arg, ::System::Single arg2)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDCALLBACKWAITACTION_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};
}

