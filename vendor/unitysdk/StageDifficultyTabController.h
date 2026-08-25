#pragma once
#include "unitysdk.h"

#define STAGEDIFFICULTYTABCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x241C370)
#define STAGEDIFFICULTYTABCONTROLLER_CHANGETABKEY_OFFSET UNITYSDK_OFFSET(0x241C3B0)

	inline static constexpr unsigned int StageDifficultyTabController_TypeDefinitionIndex = 5491;

	class StageDifficultyTabController : public ::MS::Internal::Xml::XPath::CompiledXpathExpr
	{
	public:
		::Il2CppArray<::System::Object*>* tabSelectLabel; // 0x58
		::Il2CppArray<::System::Object*>* tabNonSelectLabel; // 0x60

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEDIFFICULTYTABCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ChangeTabKey(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + STAGEDIFFICULTYTABCONTROLLER_CHANGETABKEY_OFFSET))(arg, nullptr);
		}

	};

