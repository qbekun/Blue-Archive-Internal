#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Shader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Vector4; }

#define TMPRO_SHADERUTILITIES_GET_SHADERREF_MOBILESDF_OFFSET UNITYSDK_OFFSET(0xA175AA0)
#define TMPRO_SHADERUTILITIES_GET_SHADERREF_MOBILEBITMAP_OFFSET UNITYSDK_OFFSET(0xA175BB0)
#define TMPRO_SHADERUTILITIES_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA175CC0)
#define TMPRO_SHADERUTILITIES_GETSHADERPROPERTYIDS_OFFSET UNITYSDK_OFFSET(0xA16E100)
#define TMPRO_SHADERUTILITIES_UPDATESHADERRATIOS_OFFSET UNITYSDK_OFFSET(0xA175F50)
#define TMPRO_SHADERUTILITIES_GETFONTEXTENT_OFFSET UNITYSDK_OFFSET(0xA1764F0)
#define TMPRO_SHADERUTILITIES_ISMASKINGENABLED_OFFSET UNITYSDK_OFFSET(0xA176540)
#define TMPRO_SHADERUTILITIES_GETPADDING_OFFSET UNITYSDK_OFFSET(0xA1766F0)
#define TMPRO_SHADERUTILITIES_GETPADDING_OFFSET UNITYSDK_OFFSET(0xA177010)

namespace TMPro
{
	inline static constexpr unsigned int ShaderUtilities_TypeDefinitionIndex = 33718;

	class ShaderUtilities : public Il2CppObject
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
		::System::Int32 ID_UnderlayOffset; // 0x28
		::System::Int32 ID_UnderlayIsoPerimeter; // 0x2C
		::System::Int32 ID_WeightNormal; // 0x30
		::System::Int32 ID_WeightBold; // 0x34
		::System::Int32 ID_OutlineTex; // 0x38
		::System::Int32 ID_OutlineWidth; // 0x3C
		::System::Int32 ID_OutlineSoftness; // 0x40
		::System::Int32 ID_OutlineColor; // 0x44
		::System::Int32 ID_Outline2Color; // 0x48
		::System::Int32 ID_Outline2Width; // 0x4C
		::System::Int32 ID_Padding; // 0x50
		::System::Int32 ID_GradientScale; // 0x54
		::System::Int32 ID_ScaleX; // 0x58
		::System::Int32 ID_ScaleY; // 0x5C
		::System::Int32 ID_PerspectiveFilter; // 0x60
		::System::Int32 ID_Sharpness; // 0x64
		::System::Int32 ID_TextureWidth; // 0x68
		::System::Int32 ID_TextureHeight; // 0x6C
		::System::Int32 ID_BevelAmount; // 0x70
		::System::Int32 ID_GlowColor; // 0x74
		::System::Int32 ID_GlowOffset; // 0x78
		::System::Int32 ID_GlowPower; // 0x7C
		::System::Int32 ID_GlowOuter; // 0x80
		::System::Int32 ID_GlowInner; // 0x84
		::System::Int32 ID_LightAngle; // 0x88
		::System::Int32 ID_EnvMap; // 0x8C
		::System::Int32 ID_EnvMatrix; // 0x90
		::System::Int32 ID_EnvMatrixRotation; // 0x94
		::System::Int32 ID_MaskCoord; // 0x98
		::System::Int32 ID_ClipRect; // 0x9C
		::System::Int32 ID_MaskSoftnessX; // 0xA0
		::System::Int32 ID_MaskSoftnessY; // 0xA4
		::System::Int32 ID_VertexOffsetX; // 0xA8
		::System::Int32 ID_VertexOffsetY; // 0xAC
		::System::Int32 ID_UseClipRect; // 0xB0
		::System::Int32 ID_StencilID; // 0xB4
		::System::Int32 ID_StencilOp; // 0xB8
		::System::Int32 ID_StencilComp; // 0xBC
		::System::Int32 ID_StencilReadMask; // 0xC0
		::System::Int32 ID_StencilWriteMask; // 0xC4
		::System::Int32 ID_ShaderFlags; // 0xC8
		::System::Int32 ID_ScaleRatio_A; // 0xCC
		::System::Int32 ID_ScaleRatio_B; // 0xD0
		::System::Int32 ID_ScaleRatio_C; // 0xD4
		::System::String* Keyword_Bevel; // 0xD8
		::System::String* Keyword_Glow; // 0xE0
		::System::String* Keyword_Underlay; // 0xE8
		::System::String* Keyword_Ratios; // 0xF0
		::System::String* Keyword_MASK_SOFT; // 0xF8
		::System::String* Keyword_MASK_HARD; // 0x100
		::System::String* Keyword_MASK_TEX; // 0x108
		::System::String* Keyword_Outline; // 0x110
		::System::String* ShaderTag_ZTestMode; // 0x118
		::System::String* ShaderTag_CullMode; // 0x120
		::System::Single m_clamp; // 0x128
		::System::Boolean isInitialized; // 0x12C
		::UnityEngine::Shader* k_ShaderRef_MobileSDF; // 0x130
		::UnityEngine::Shader* k_ShaderRef_MobileBitmap; // 0x138

		::UnityEngine::Shader* get_ShaderRef_MobileSDF()
		{
			return (return (::UnityEngine::Shader*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_SHADERUTILITIES_GET_SHADERREF_MOBILESDF_OFFSET))(nullptr);
		}

		::UnityEngine::Shader* get_ShaderRef_MobileBitmap()
		{
			return (return (::UnityEngine::Shader*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_SHADERUTILITIES_GET_SHADERREF_MOBILEBITMAP_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_SHADERUTILITIES_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void GetShaderPropertyIDs()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_SHADERUTILITIES_GETSHADERPROPERTYIDS_OFFSET))(nullptr);
		}

		::System::Void UpdateShaderRatios(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_SHADERUTILITIES_UPDATESHADERRATIOS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector4* GetFontExtent(::UnityEngine::Material* arg)
		{
			return (return (::UnityEngine::Vector4*(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_SHADERUTILITIES_GETFONTEXTENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsMaskingEnabled(::UnityEngine::Material* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_SHADERUTILITIES_ISMASKINGENABLED_OFFSET))(arg, nullptr);
		}

		::System::Single GetPadding(::UnityEngine::Material* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Material*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_SHADERUTILITIES_GETPADDING_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single GetPadding(::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Single(*)(::Il2CppArray<::System::Object*>*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_SHADERUTILITIES_GETPADDING_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

