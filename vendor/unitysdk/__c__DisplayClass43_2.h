#pragma once
#include "unitysdk.h"

namespace NPA::Editor::Auth { class NXPTermsDialog; }
namespace NPA::Auth { class NXPAgreeTermsWithoutUpdateToyTokenResult; }
namespace NPA::Editor::Network { class NXPToyOpenApiPolicyResponse; }

#define <>C__DISPLAYCLASS43_2_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D856B0)
#define <>C__DISPLAYCLASS43_2__SETOPENAPIPOLICY_B__3_OFFSET UNITYSDK_OFFSET(0x9D856C0)
#define <>C__DISPLAYCLASS43_2__SETOPENAPIPOLICY_B__5_OFFSET UNITYSDK_OFFSET(0x9D858F0)

	inline static constexpr unsigned int <>c__DisplayClass43_2_TypeDefinitionIndex = 26269;

	class <>c__DisplayClass43_2 : public Il2CppObject
	{
	public:
		::NPA::Editor::Auth::NXPTermsDialog* termsView; // 0x10
		<>c__DisplayClass43_1* CS$__8__locals2; // 0x18
		Il2CppObject* __9__5; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS43_2_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _SetOpenApiPolicy_b__3(::NPA::Auth::NXPAgreeTermsWithoutUpdateToyTokenResult* arg)
		{
			((::System::Void(*)(::NPA::Auth::NXPAgreeTermsWithoutUpdateToyTokenResult*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS43_2__SETOPENAPIPOLICY_B__3_OFFSET))(arg, nullptr);
		}

		::System::Void _SetOpenApiPolicy_b__5(::NPA::Editor::Network::NXPToyOpenApiPolicyResponse* arg)
		{
			((::System::Void(*)(::NPA::Editor::Network::NXPToyOpenApiPolicyResponse*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS43_2__SETOPENAPIPOLICY_B__5_OFFSET))(arg, nullptr);
		}

	};

