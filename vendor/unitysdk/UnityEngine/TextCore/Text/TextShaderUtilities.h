#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Shader; }
namespace UnityEngine { class Material; }

#define UNITYENGINE_TEXTCORE_TEXT_TEXTSHADERUTILITIES_GET_SHADERREF_MOBILESDF_OFFSET UNITYSDK_OFFSET(0xA2E2BF0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSHADERUTILITIES_GET_SHADERREF_MOBILEBITMAP_OFFSET UNITYSDK_OFFSET(0xA2E2DA0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSHADERUTILITIES_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA2E2F50)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSHADERUTILITIES_GETSHADERPROPERTYIDS_OFFSET UNITYSDK_OFFSET(0xA2E31E0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSHADERUTILITIES_UPDATESHADERRATIOS_OFFSET UNITYSDK_OFFSET(0xA2E3B80)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSHADERUTILITIES_ISMASKINGENABLED_OFFSET UNITYSDK_OFFSET(0xA2E4120)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSHADERUTILITIES_GETPADDING_OFFSET UNITYSDK_OFFSET(0xA2E42D0)

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int TextShaderUtilities_TypeDefinitionIndex = 35612;

	class TextShaderUtilities : public Il2CppObject
	{
	public:
		::System::Int32 ID_MainTex; // 0x0
		::System::Int32 ID_FaceTex; // 0x4
		::System::Int32 ID_FaceColor; // 0x8
		::System::Int32 ID_FaceDilate; // 0xC
		::System::Int32 ID_Shininess; // 0x10
		::System::Int32 ID_UnderlayColor; // 0x14
		::System::Int32 ID_UnderlayOffsetX; // 0x18
		::System::Int32 ID_UnderlayOffsetY; // 0x1C
		::System::Int32 ID_UnderlayDilate; // 0x20
		::System::Int32 ID_UnderlaySoftness; // 0x24
		::System::Int32 ID_WeightNormal; // 0x28
		::System::Int32 ID_WeightBold; // 0x2C
		::System::Int32 ID_OutlineTex; // 0x30
		::System::Int32 ID_OutlineWidth; // 0x34
		::System::Int32 ID_OutlineSoftness; // 0x38
		::System::Int32 ID_OutlineColor; // 0x3C
		::System::Int32 ID_Outline2Color; // 0x40
		::System::Int32 ID_Outline2Width; // 0x44
		::System::Int32 ID_Padding; // 0x48
		::System::Int32 ID_GradientScale; // 0x4C
		::System::Int32 ID_ScaleX; // 0x50
		::System::Int32 ID_ScaleY; // 0x54
		::System::Int32 ID_PerspectiveFilter; // 0x58
		::System::Int32 ID_Sharpness; // 0x5C
		::System::Int32 ID_TextureWidth; // 0x60
		::System::Int32 ID_TextureHeight; // 0x64
		::System::Int32 ID_BevelAmount; // 0x68
		::System::Int32 ID_GlowColor; // 0x6C
		::System::Int32 ID_GlowOffset; // 0x70
		::System::Int32 ID_GlowPower; // 0x74
		::System::Int32 ID_GlowOuter; // 0x78
		::System::Int32 ID_GlowInner; // 0x7C
		::System::Int32 ID_LightAngle; // 0x80
		::System::Int32 ID_EnvMap; // 0x84
		::System::Int32 ID_EnvMatrix; // 0x88
		::System::Int32 ID_EnvMatrixRotation; // 0x8C
		::System::Int32 ID_MaskCoord; // 0x90
		::System::Int32 ID_ClipRect; // 0x94
		::System::Int32 ID_MaskSoftnessX; // 0x98
		::System::Int32 ID_MaskSoftnessY; // 0x9C
		::System::Int32 ID_VertexOffsetX; // 0xA0
		::System::Int32 ID_VertexOffsetY; // 0xA4
		::System::Int32 ID_UseClipRect; // 0xA8
		::System::Int32 ID_StencilID; // 0xAC
		::System::Int32 ID_StencilOp; // 0xB0
		::System::Int32 ID_StencilComp; // 0xB4
		::System::Int32 ID_StencilReadMask; // 0xB8
		::System::Int32 ID_StencilWriteMask; // 0xBC
		::System::Int32 ID_ShaderFlags; // 0xC0
		::System::Int32 ID_ScaleRatio_A; // 0xC4
		::System::Int32 ID_ScaleRatio_B; // 0xC8
		::System::Int32 ID_ScaleRatio_C; // 0xCC
		::System::String* Keyword_Bevel; // 0xD0
		::System::String* Keyword_Glow; // 0xD8
		::System::String* Keyword_Underlay; // 0xE0
		::System::String* Keyword_Ratios; // 0xE8
		::System::String* Keyword_MASK_SOFT; // 0xF0
		::System::String* Keyword_MASK_HARD; // 0xF8
		::System::String* Keyword_MASK_TEX; // 0x100
		::System::String* Keyword_Outline; // 0x108
		::System::String* ShaderTag_ZTestMode; // 0x110
		::System::String* ShaderTag_CullMode; // 0x118
		::System::Single m_clamp; // 0x120
		::System::Boolean isInitialized; // 0x124
		::UnityEngine::Shader* k_ShaderRef_MobileSDF; // 0x128
		::UnityEngine::Shader* k_ShaderRef_MobileBitmap; // 0x130

		::UnityEngine::Shader* get_ShaderRef_MobileSDF()
		{
			return (return (::UnityEngine::Shader*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSHADERUTILITIES_GET_SHADERREF_MOBILESDF_OFFSET))(nullptr);
		}

		::UnityEngine::Shader* get_ShaderRef_MobileBitmap()
		{
			return (return (::UnityEngine::Shader*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSHADERUTILITIES_GET_SHADERREF_MOBILEBITMAP_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSHADERUTILITIES_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void GetShaderPropertyIDs()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSHADERUTILITIES_GETSHADERPROPERTYIDS_OFFSET))(nullptr);
		}

		::System::Void UpdateShaderRatios(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSHADERUTILITIES_UPDATESHADERRATIOS_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsMaskingEnabled(::UnityEngine::Material* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSHADERUTILITIES_ISMASKINGENABLED_OFFSET))(arg, nullptr);
		}

		::System::Single GetPadding(::UnityEngine::Material* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Material*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSHADERUTILITIES_GETPADDING_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

