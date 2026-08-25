#pragma once
#include "unitysdk.h"

class MXButton;
class UITexture;
class UILabel;
namespace UnityEngine { class Texture; }

#define BUFFINFO_CLOSE_OFFSET UNITYSDK_OFFSET(0x2293FD0)
#define BUFFINFO__OPEN_B__6_0_OFFSET UNITYSDK_OFFSET(0x2294020)
#define BUFFINFO_AWAKE_OFFSET UNITYSDK_OFFSET(0x2294050)
#define BUFFINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x2294250)
#define BUFFINFO_OPEN_OFFSET UNITYSDK_OFFSET(0x2294260)

	inline static constexpr unsigned int BuffInfo_TypeDefinitionIndex = 4712;

	class BuffInfo : public Il2CppObject
	{
	public:
		MXButton* ButtonX; // 0x18
		MXButton* ButtonOk; // 0x20
		UITexture* Icon; // 0x28
		UILabel* InfoLabel; // 0x30
		UILabel* turnLabel; // 0x38

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFINFO_CLOSE_OFFSET))(nullptr);
		}

		::System::Void _Open_b__6_0(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + BUFFINFO__OPEN_B__6_0_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFINFO_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Open(::System::Int64 arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BUFFINFO_OPEN_OFFSET))(arg, arg2, nullptr);
		}

	};

