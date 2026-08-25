#pragma once
#include "../../../unitysdk.h"

#define MX_CORE_IO_PATHHELPER_COMBINE_OFFSET UNITYSDK_OFFSET(0x1032C10)
#define MX_CORE_IO_PATHHELPER_COMBINEFILENAME_OFFSET UNITYSDK_OFFSET(0x1032C80)

namespace MX::Core::IO
{
	inline static constexpr unsigned int PathHelper_TypeDefinitionIndex = 12829;

	class PathHelper : public Il2CppObject
	{
	public:
		::System::String* Combine(::Il2CppArray<::System::Object*>* arg)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_PATHHELPER_COMBINE_OFFSET))(arg, nullptr);
		}

		::System::String* CombineFileName(::System::String* str, ::System::String* str2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_PATHHELPER_COMBINEFILENAME_OFFSET))(str, str2, nullptr);
		}

	};
}

