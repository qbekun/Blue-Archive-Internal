#pragma once
#include "unitysdk.h"

#define COMPATIBILITYPROBLEMINFO_DESCRIPTIONSTRING_OFFSET UNITYSDK_OFFSET(0x95EC770)
#define COMPATIBILITYPROBLEMINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x95ECAA0)

	inline static constexpr unsigned int CompatibilityProblemInfo_TypeDefinitionIndex = 35281;

	class CompatibilityProblemInfo : public Il2CppObject
	{
	public:
		VersionInfo* actualVersion; // 0x10
		::Il2CppArray<::System::Object*>* compatibleVersions; // 0x18
		::System::String* explicitProblemDescription; // 0x20

		::System::String* DescriptionString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + COMPATIBILITYPROBLEMINFO_DESCRIPTIONSTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMPATIBILITYPROBLEMINFO_.CTOR_OFFSET))(nullptr);
		}

	};

