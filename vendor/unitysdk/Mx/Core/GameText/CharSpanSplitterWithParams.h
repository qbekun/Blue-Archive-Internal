#pragma once
#include "../../../unitysdk.h"

class Enumerator;

#define MX_CORE_GAMETEXT_CHARSPANSPLITTERWITHPARAMS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1040140)
#define MX_CORE_GAMETEXT_CHARSPANSPLITTERWITHPARAMS_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1040150)

namespace MX::Core::GameText
{
	inline static constexpr unsigned int CharSpanSplitterWithParams_TypeDefinitionIndex = 12859;

	class CharSpanSplitterWithParams : public Il2CppObject
	{
	public:
		Il2CppObject* _input; // 0x10
		::Il2CppArray<::System::Object*>* _separators; // 0x20

		::System::Void .ctor(Il2CppObject* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_GAMETEXT_CHARSPANSPLITTERWITHPARAMS_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		Enumerator* GetEnumerator()
		{
			return ((Enumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_GAMETEXT_CHARSPANSPLITTERWITHPARAMS_GETENUMERATOR_OFFSET))(nullptr);
		}

	};
}

