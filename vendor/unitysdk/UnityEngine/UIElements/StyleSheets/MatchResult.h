#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::UIElements::StyleSheets { class MatchResultErrorCode; }

#define UNITYENGINE_UIELEMENTS_STYLESHEETS_MATCHRESULT_GET_SUCCESS_OFFSET UNITYSDK_OFFSET(0xA372DC0)

namespace UnityEngine::UIElements::StyleSheets
{
	inline static constexpr unsigned int MatchResult_TypeDefinitionIndex = 30817;

	class MatchResult : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode* errorCode; // 0x10
		::System::String* errorValue; // 0x18

		::System::Boolean get_success()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_MATCHRESULT_GET_SUCCESS_OFFSET))(nullptr);
		}

	};
}

