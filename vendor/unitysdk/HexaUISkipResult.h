#pragma once
#include "unitysdk.h"

class UITexture;
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Texture; }

#define HEXAUISKIPRESULT__INITRANKTEXTURE_B__10_3_OFFSET UNITYSDK_OFFSET(0x2298690)
#define HEXAUISKIPRESULT__INITRANKTEXTURE_B__10_2_OFFSET UNITYSDK_OFFSET(0x22986A0)
#define HEXAUISKIPRESULT__INITRANKTEXTURE_B__10_1_OFFSET UNITYSDK_OFFSET(0x22986B0)
#define HEXAUISKIPRESULT_PLAYVICTORYNORANKANIMATION_OFFSET UNITYSDK_OFFSET(0x22986C0)
#define HEXAUISKIPRESULT_PLAYVICTORYANIMATION_OFFSET UNITYSDK_OFFSET(0x22987F0)
#define HEXAUISKIPRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2298990)
#define HEXAUISKIPRESULT_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x2298750)
#define HEXAUISKIPRESULT__INITRANKTEXTURE_B__10_0_OFFSET UNITYSDK_OFFSET(0x22989C0)
#define HEXAUISKIPRESULT_PLAYDEFEATANIMATION_OFFSET UNITYSDK_OFFSET(0x22989D0)
#define HEXAUISKIPRESULT_INITRANKTEXTURE_OFFSET UNITYSDK_OFFSET(0x2297E30)

	inline static constexpr unsigned int HexaUISkipResult_TypeDefinitionIndex = 4721;

	class HexaUISkipResult : public Il2CppObject
	{
	public:
		::System::String* RankTextureName; // 0x0
		UITexture* rank; // 0x18
		::UnityEngine::Animation* ani; // 0x20
		::System::String* aniNameVictory; // 0x28
		::System::String* aniNameVictoryNoRank; // 0x30
		::System::String* aniNameDefeat; // 0x38
		::UnityEngine::Texture* textureRankC; // 0x40
		::UnityEngine::Texture* textureRankB; // 0x48
		::UnityEngine::Texture* textureRankA; // 0x50
		::UnityEngine::Texture* textureRankS; // 0x58

		::System::Void _InitRankTexture_b__10_3(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + HEXAUISKIPRESULT__INITRANKTEXTURE_B__10_3_OFFSET))(arg, nullptr);
		}

		::System::Void _InitRankTexture_b__10_2(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + HEXAUISKIPRESULT__INITRANKTEXTURE_B__10_2_OFFSET))(arg, nullptr);
		}

		::System::Void _InitRankTexture_b__10_1(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + HEXAUISKIPRESULT__INITRANKTEXTURE_B__10_1_OFFSET))(arg, nullptr);
		}

		::System::Void PlayVictoryNoRankAnimation(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + HEXAUISKIPRESULT_PLAYVICTORYNORANKANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Void PlayVictoryAnimation(::System::Int64 arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + HEXAUISKIPRESULT_PLAYVICTORYANIMATION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUISKIPRESULT_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* PlayAnimation(::System::String* str, ::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + HEXAUISKIPRESULT_PLAYANIMATION_OFFSET))(str, arg, nullptr);
		}

		::System::Void _InitRankTexture_b__10_0(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + HEXAUISKIPRESULT__INITRANKTEXTURE_B__10_0_OFFSET))(arg, nullptr);
		}

		::System::Void PlayDefeatAnimation(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + HEXAUISKIPRESULT_PLAYDEFEATANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Void InitRankTexture()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUISKIPRESULT_INITRANKTEXTURE_OFFSET))(nullptr);
		}

	};

