#pragma once
#include "unitysdk.h"

namespace UnityEngine { class AnimationCurve; }

#define SHADERFADEANIMATIONDATA_RESET_OFFSET UNITYSDK_OFFSET(0x20DB4B0)
#define SHADERFADEANIMATIONDATA_SAVEBLENDINFO_OFFSET UNITYSDK_OFFSET(0x20DB610)
#define SHADERFADEANIMATIONDATA_SETFRAMEVALUES_OFFSET UNITYSDK_OFFSET(0x20DB9D0)
#define SHADERFADEANIMATIONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x20DBBA0)
#define SHADERFADEANIMATIONDATA_POSTPROCESS_OFFSET UNITYSDK_OFFSET(0x20DBCC0)
#define SHADERFADEANIMATIONDATA_PREPROCESS_OFFSET UNITYSDK_OFFSET(0x20DBCD0)
#define SHADERFADEANIMATIONDATA_RESETBLENDINFO_OFFSET UNITYSDK_OFFSET(0x20DB4E0)

	inline static constexpr unsigned int ShaderFadeAnimationData_TypeDefinitionIndex = 3746;

	class ShaderFadeAnimationData : public Il2CppObject
	{
	public:
		::System::String* FloatName; // 0x38
		::UnityEngine::AnimationCurve* FloatCurve01; // 0x40
		::System::Single FloatMin; // 0x48
		::System::Single FloatMax; // 0x4C
		::System::Boolean IgnoreAlphaIfFloatExists; // 0x50
		::System::Boolean ResetBlendOnFinish; // 0x51
		::System::String* ColorName; // 0x58
		::UnityEngine::AnimationCurve* AlphaCurve01; // 0x60
		::System::Int32 SrcAlpha; // 0x0
		::System::Int32 OneMinusSrcAlpha; // 0x0
		::System::Int32 GeometryLast; // 0x0
		::System::Int32 Transparent; // 0x0
		::System::Int32 srcBlendId; // 0x68
		::System::Int32 dstBlendId; // 0x6C
		::System::Int32 zWriteId; // 0x70
		::System::Int32 floatId; // 0x74
		::System::Single floatCurveScale; // 0x78
		::System::Int32 colorId; // 0x7C
		Il2CppObject* blendInfoList; // 0x80

		::System::Void Reset(::Il2CppArray<::System::Object*>* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SHADERFADEANIMATIONDATA_RESET_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SaveBlendInfo(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SHADERFADEANIMATIONDATA_SAVEBLENDINFO_OFFSET))(arg, nullptr);
		}

		::System::Void SetFrameValues(::Il2CppArray<::System::Object*>* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SHADERFADEANIMATIONDATA_SETFRAMEVALUES_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERFADEANIMATIONDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PostProcess(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SHADERFADEANIMATIONDATA_POSTPROCESS_OFFSET))(arg, nullptr);
		}

		::System::Boolean PreProcess(::Il2CppArray<::System::Object*>* arg)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SHADERFADEANIMATIONDATA_PREPROCESS_OFFSET))(arg, nullptr);
		}

		::System::Void ResetBlendInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERFADEANIMATIONDATA_RESETBLENDINFO_OFFSET))(nullptr);
		}

	};

