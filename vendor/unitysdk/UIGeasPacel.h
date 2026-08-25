#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UITexture;
namespace MX::Data::Excel { class MiniGameShootingGeasExcel; }

#define UIGEASPACEL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x205F910)
#define UIGEASPACEL_.CTOR_OFFSET UNITYSDK_OFFSET(0x205FF40)

	inline static constexpr unsigned int UIGeasPacel_TypeDefinitionIndex = 3394;

	class UIGeasPacel : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* GeasAction; // 0x18
		::UnityEngine::GameObject* GeasEffect; // 0x20
		UITexture* ActionTexture; // 0x28
		UITexture* EffectTexture; // 0x30

		::System::Void Initialize(::MX::Data::Excel::MiniGameShootingGeasExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::MiniGameShootingGeasExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UIGEASPACEL_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGEASPACEL_.CTOR_OFFSET))(nullptr);
		}

	};

