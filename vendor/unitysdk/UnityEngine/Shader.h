#pragma once
#include "../unitysdk.h"

namespace UnityEngine::Rendering { class ShaderHardwareTier; }
namespace UnityEngine { class Shader; }
namespace UnityEngine::Rendering { class LocalKeywordSpace; }
namespace UnityEngine::Rendering { class GlobalKeyword; }
namespace UnityEngine::Rendering { class GlobalKeyword&; }
namespace UnityEngine { class DisableBatchingType; }
namespace UnityEngine::Rendering { class ShaderTagId; }
namespace UnityEngine { class Vector4; }
namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::Rendering { class RenderTextureSubElement; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class GraphicsBuffer; }
namespace UnityEngine { class Color; }
namespace UnityEngine::Rendering { class ShaderPropertyType; }
namespace UnityEngine::Rendering { class ShaderPropertyFlags; }
namespace UnityEngine::Rendering { class TextureDimension; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine::Rendering { class LocalKeywordSpace&; }
namespace UnityEngine { class Vector4&; }
namespace UnityEngine { class Matrix4x4&; }

#define UNITYENGINE_SHADER_GET_GLOBALSHADERHARDWARETIER_OFFSET UNITYSDK_OFFSET(0xA1FB580)
#define UNITYENGINE_SHADER_SET_GLOBALSHADERHARDWARETIER_OFFSET UNITYSDK_OFFSET(0xA1FB600)
#define UNITYENGINE_SHADER_FIND_OFFSET UNITYSDK_OFFSET(0xA1FB680)
#define UNITYENGINE_SHADER_FINDBUILTIN_OFFSET UNITYSDK_OFFSET(0xA1FB710)
#define UNITYENGINE_SHADER_GET_MAXIMUMCHUNKSOVERRIDE_OFFSET UNITYSDK_OFFSET(0xA1FB750)
#define UNITYENGINE_SHADER_SET_MAXIMUMCHUNKSOVERRIDE_OFFSET UNITYSDK_OFFSET(0xA1FB790)
#define UNITYENGINE_SHADER_GET_MAXIMUMLOD_OFFSET UNITYSDK_OFFSET(0xA1FB7D0)
#define UNITYENGINE_SHADER_SET_MAXIMUMLOD_OFFSET UNITYSDK_OFFSET(0xA1FB810)
#define UNITYENGINE_SHADER_GET_GLOBALMAXIMUMLOD_OFFSET UNITYSDK_OFFSET(0xA1FB850)
#define UNITYENGINE_SHADER_SET_GLOBALMAXIMUMLOD_OFFSET UNITYSDK_OFFSET(0xA1FB890)
#define UNITYENGINE_SHADER_GET_ISSUPPORTED_OFFSET UNITYSDK_OFFSET(0xA1FB8D0)
#define UNITYENGINE_SHADER_GET_GLOBALRENDERPIPELINE_OFFSET UNITYSDK_OFFSET(0xA1FB910)
#define UNITYENGINE_SHADER_SET_GLOBALRENDERPIPELINE_OFFSET UNITYSDK_OFFSET(0xA1FB950)
#define UNITYENGINE_SHADER_GET_ENABLEDGLOBALKEYWORDS_OFFSET UNITYSDK_OFFSET(0xA1FB990)
#define UNITYENGINE_SHADER_GET_GLOBALKEYWORDS_OFFSET UNITYSDK_OFFSET(0xA1FBA10)
#define UNITYENGINE_SHADER_GET_KEYWORDSPACE_OFFSET UNITYSDK_OFFSET(0xA1FBA90)
#define UNITYENGINE_SHADER_GETENABLEDGLOBALKEYWORDS_OFFSET UNITYSDK_OFFSET(0xA1FB9D0)
#define UNITYENGINE_SHADER_GETALLGLOBALKEYWORDS_OFFSET UNITYSDK_OFFSET(0xA1FBA50)
#define UNITYENGINE_SHADER_ENABLEKEYWORD_OFFSET UNITYSDK_OFFSET(0xA1FBB20)
#define UNITYENGINE_SHADER_DISABLEKEYWORD_OFFSET UNITYSDK_OFFSET(0xA1FBB60)
#define UNITYENGINE_SHADER_ISKEYWORDENABLED_OFFSET UNITYSDK_OFFSET(0xA1FBBA0)
#define UNITYENGINE_SHADER_ENABLEKEYWORDFAST_OFFSET UNITYSDK_OFFSET(0xA1FBBE0)
#define UNITYENGINE_SHADER_DISABLEKEYWORDFAST_OFFSET UNITYSDK_OFFSET(0xA1FBC60)
#define UNITYENGINE_SHADER_SETKEYWORDFAST_OFFSET UNITYSDK_OFFSET(0xA1FBCE0)
#define UNITYENGINE_SHADER_ISKEYWORDENABLEDFAST_OFFSET UNITYSDK_OFFSET(0xA1FBD60)
#define UNITYENGINE_SHADER_ENABLEKEYWORD_OFFSET UNITYSDK_OFFSET(0xA1FBDE0)
#define UNITYENGINE_SHADER_DISABLEKEYWORD_OFFSET UNITYSDK_OFFSET(0xA1FBE20)
#define UNITYENGINE_SHADER_SETKEYWORD_OFFSET UNITYSDK_OFFSET(0xA1FBE60)
#define UNITYENGINE_SHADER_ISKEYWORDENABLED_OFFSET UNITYSDK_OFFSET(0xA1FBEA0)
#define UNITYENGINE_SHADER_GET_RENDERQUEUE_OFFSET UNITYSDK_OFFSET(0xA1FBEE0)
#define UNITYENGINE_SHADER_GET_DISABLEBATCHING_OFFSET UNITYSDK_OFFSET(0xA1FBF20)
#define UNITYENGINE_SHADER_WARMUPALLSHADERS_OFFSET UNITYSDK_OFFSET(0xA1FBF60)
#define UNITYENGINE_SHADER_TAGTOID_OFFSET UNITYSDK_OFFSET(0xA1FBFA0)
#define UNITYENGINE_SHADER_IDTOTAG_OFFSET UNITYSDK_OFFSET(0xA1FBFE0)
#define UNITYENGINE_SHADER_PROPERTYTOID_OFFSET UNITYSDK_OFFSET(0xA1F8C50)
#define UNITYENGINE_SHADER_GETDEPENDENCY_OFFSET UNITYSDK_OFFSET(0xA1FC020)
#define UNITYENGINE_SHADER_GET_PASSCOUNT_OFFSET UNITYSDK_OFFSET(0xA1FC060)
#define UNITYENGINE_SHADER_GET_SUBSHADERCOUNT_OFFSET UNITYSDK_OFFSET(0xA1FC0A0)
#define UNITYENGINE_SHADER_GETPASSCOUNTINSUBSHADER_OFFSET UNITYSDK_OFFSET(0xA1FC0E0)
#define UNITYENGINE_SHADER_FINDPASSTAGVALUE_OFFSET UNITYSDK_OFFSET(0xA1FC120)
#define UNITYENGINE_SHADER_FINDPASSTAGVALUE_OFFSET UNITYSDK_OFFSET(0xA1FC260)
#define UNITYENGINE_SHADER_FINDSUBSHADERTAGVALUE_OFFSET UNITYSDK_OFFSET(0xA1FC410)
#define UNITYENGINE_SHADER_INTERNAL_FINDPASSTAGVALUE_OFFSET UNITYSDK_OFFSET(0xA1FC210)
#define UNITYENGINE_SHADER_INTERNAL_FINDPASSTAGVALUEINSUBSHADER_OFFSET UNITYSDK_OFFSET(0xA1FC3C0)
#define UNITYENGINE_SHADER_INTERNAL_FINDSUBSHADERTAGVALUE_OFFSET UNITYSDK_OFFSET(0xA1FC560)
#define UNITYENGINE_SHADER_SETGLOBALINTIMPL_OFFSET UNITYSDK_OFFSET(0xA1FC5B0)
#define UNITYENGINE_SHADER_SETGLOBALFLOATIMPL_OFFSET UNITYSDK_OFFSET(0xA1FC5F0)
#define UNITYENGINE_SHADER_SETGLOBALVECTORIMPL_OFFSET UNITYSDK_OFFSET(0xA1FC640)
#define UNITYENGINE_SHADER_SETGLOBALMATRIXIMPL_OFFSET UNITYSDK_OFFSET(0xA1FC6C0)
#define UNITYENGINE_SHADER_SETGLOBALTEXTUREIMPL_OFFSET UNITYSDK_OFFSET(0xA1FC740)
#define UNITYENGINE_SHADER_SETGLOBALRENDERTEXTUREIMPL_OFFSET UNITYSDK_OFFSET(0xA1FC780)
#define UNITYENGINE_SHADER_SETGLOBALBUFFERIMPL_OFFSET UNITYSDK_OFFSET(0xA1FC7D0)
#define UNITYENGINE_SHADER_SETGLOBALGRAPHICSBUFFERIMPL_OFFSET UNITYSDK_OFFSET(0xA1FC810)
#define UNITYENGINE_SHADER_SETGLOBALCONSTANTBUFFERIMPL_OFFSET UNITYSDK_OFFSET(0xA1FC850)
#define UNITYENGINE_SHADER_SETGLOBALCONSTANTGRAPHICSBUFFERIMPL_OFFSET UNITYSDK_OFFSET(0xA1FC8A0)
#define UNITYENGINE_SHADER_GETGLOBALINTIMPL_OFFSET UNITYSDK_OFFSET(0xA1FC8F0)
#define UNITYENGINE_SHADER_GETGLOBALFLOATIMPL_OFFSET UNITYSDK_OFFSET(0xA1FC930)
#define UNITYENGINE_SHADER_GETGLOBALVECTORIMPL_OFFSET UNITYSDK_OFFSET(0xA1FC970)
#define UNITYENGINE_SHADER_GETGLOBALMATRIXIMPL_OFFSET UNITYSDK_OFFSET(0xA1FCA00)
#define UNITYENGINE_SHADER_GETGLOBALTEXTUREIMPL_OFFSET UNITYSDK_OFFSET(0xA1FCAC0)
#define UNITYENGINE_SHADER_SETGLOBALFLOATARRAYIMPL_OFFSET UNITYSDK_OFFSET(0xA1FCB00)
#define UNITYENGINE_SHADER_SETGLOBALVECTORARRAYIMPL_OFFSET UNITYSDK_OFFSET(0xA1FCB50)
#define UNITYENGINE_SHADER_SETGLOBALMATRIXARRAYIMPL_OFFSET UNITYSDK_OFFSET(0xA1FCBA0)
#define UNITYENGINE_SHADER_GETGLOBALFLOATARRAYIMPL_OFFSET UNITYSDK_OFFSET(0xA1FCBF0)
#define UNITYENGINE_SHADER_GETGLOBALVECTORARRAYIMPL_OFFSET UNITYSDK_OFFSET(0xA1FCC30)
#define UNITYENGINE_SHADER_GETGLOBALMATRIXARRAYIMPL_OFFSET UNITYSDK_OFFSET(0xA1FCC70)
#define UNITYENGINE_SHADER_GETGLOBALFLOATARRAYCOUNTIMPL_OFFSET UNITYSDK_OFFSET(0xA1FCCB0)
#define UNITYENGINE_SHADER_GETGLOBALVECTORARRAYCOUNTIMPL_OFFSET UNITYSDK_OFFSET(0xA1FCCF0)
#define UNITYENGINE_SHADER_GETGLOBALMATRIXARRAYCOUNTIMPL_OFFSET UNITYSDK_OFFSET(0xA1FCD30)
#define UNITYENGINE_SHADER_EXTRACTGLOBALFLOATARRAYIMPL_OFFSET UNITYSDK_OFFSET(0xA1FCD70)
#define UNITYENGINE_SHADER_EXTRACTGLOBALVECTORARRAYIMPL_OFFSET UNITYSDK_OFFSET(0xA1FCDB0)
#define UNITYENGINE_SHADER_EXTRACTGLOBALMATRIXARRAYIMPL_OFFSET UNITYSDK_OFFSET(0xA1FCDF0)
#define UNITYENGINE_SHADER_SETGLOBALFLOATARRAY_OFFSET UNITYSDK_OFFSET(0xA1FCE30)
#define UNITYENGINE_SHADER_SETGLOBALVECTORARRAY_OFFSET UNITYSDK_OFFSET(0xA1FCF40)
#define UNITYENGINE_SHADER_SETGLOBALMATRIXARRAY_OFFSET UNITYSDK_OFFSET(0xA1FD050)
#define UNITYENGINE_SHADER_EXTRACTGLOBALFLOATARRAY_OFFSET UNITYSDK_OFFSET(0xA1FD160)
#define UNITYENGINE_SHADER_EXTRACTGLOBALVECTORARRAY_OFFSET UNITYSDK_OFFSET(0xA1FD2D0)
#define UNITYENGINE_SHADER_EXTRACTGLOBALMATRIXARRAY_OFFSET UNITYSDK_OFFSET(0xA1FD440)
#define UNITYENGINE_SHADER_SETGLOBALINT_OFFSET UNITYSDK_OFFSET(0xA1FD5B0)
#define UNITYENGINE_SHADER_SETGLOBALINT_OFFSET UNITYSDK_OFFSET(0xA1FD630)
#define UNITYENGINE_SHADER_SETGLOBALFLOAT_OFFSET UNITYSDK_OFFSET(0xA1FD680)
#define UNITYENGINE_SHADER_SETGLOBALFLOAT_OFFSET UNITYSDK_OFFSET(0xA1FD6F0)
#define UNITYENGINE_SHADER_SETGLOBALINTEGER_OFFSET UNITYSDK_OFFSET(0xA1FD740)
#define UNITYENGINE_SHADER_SETGLOBALINTEGER_OFFSET UNITYSDK_OFFSET(0xA1FD7A0)
#define UNITYENGINE_SHADER_SETGLOBALVECTOR_OFFSET UNITYSDK_OFFSET(0xA1FD7E0)
#define UNITYENGINE_SHADER_SETGLOBALVECTOR_OFFSET UNITYSDK_OFFSET(0xA1FD850)
#define UNITYENGINE_SHADER_SETGLOBALCOLOR_OFFSET UNITYSDK_OFFSET(0xA1FD8A0)
#define UNITYENGINE_SHADER_SETGLOBALCOLOR_OFFSET UNITYSDK_OFFSET(0xA1FD910)
#define UNITYENGINE_SHADER_SETGLOBALMATRIX_OFFSET UNITYSDK_OFFSET(0xA1FD960)
#define UNITYENGINE_SHADER_SETGLOBALMATRIX_OFFSET UNITYSDK_OFFSET(0xA1FD9F0)
#define UNITYENGINE_SHADER_SETGLOBALTEXTURE_OFFSET UNITYSDK_OFFSET(0xA1FDA50)
#define UNITYENGINE_SHADER_SETGLOBALTEXTURE_OFFSET UNITYSDK_OFFSET(0xA1FDAC0)
#define UNITYENGINE_SHADER_SETGLOBALTEXTURE_OFFSET UNITYSDK_OFFSET(0xA1FDB00)
#define UNITYENGINE_SHADER_SETGLOBALTEXTURE_OFFSET UNITYSDK_OFFSET(0xA1FDB70)
#define UNITYENGINE_SHADER_SETGLOBALBUFFER_OFFSET UNITYSDK_OFFSET(0xA1FDBC0)
#define UNITYENGINE_SHADER_SETGLOBALBUFFER_OFFSET UNITYSDK_OFFSET(0xA1FDC30)
#define UNITYENGINE_SHADER_SETGLOBALBUFFER_OFFSET UNITYSDK_OFFSET(0xA1FDC70)
#define UNITYENGINE_SHADER_SETGLOBALBUFFER_OFFSET UNITYSDK_OFFSET(0xA1FDCE0)
#define UNITYENGINE_SHADER_SETGLOBALCONSTANTBUFFER_OFFSET UNITYSDK_OFFSET(0xA1FDD20)
#define UNITYENGINE_SHADER_SETGLOBALCONSTANTBUFFER_OFFSET UNITYSDK_OFFSET(0xA1FDDA0)
#define UNITYENGINE_SHADER_SETGLOBALCONSTANTBUFFER_OFFSET UNITYSDK_OFFSET(0xA1FDDF0)
#define UNITYENGINE_SHADER_SETGLOBALCONSTANTBUFFER_OFFSET UNITYSDK_OFFSET(0xA1FDE70)
#define UNITYENGINE_SHADER_SETGLOBALFLOATARRAY_OFFSET UNITYSDK_OFFSET(0xA1FDEC0)
#define UNITYENGINE_SHADER_SETGLOBALFLOATARRAY_OFFSET UNITYSDK_OFFSET(0xA1FDF50)
#define UNITYENGINE_SHADER_SETGLOBALFLOATARRAY_OFFSET UNITYSDK_OFFSET(0xA1FDFC0)
#define UNITYENGINE_SHADER_SETGLOBALFLOATARRAY_OFFSET UNITYSDK_OFFSET(0xA1FE020)
#define UNITYENGINE_SHADER_SETGLOBALVECTORARRAY_OFFSET UNITYSDK_OFFSET(0xA1FE040)
#define UNITYENGINE_SHADER_SETGLOBALVECTORARRAY_OFFSET UNITYSDK_OFFSET(0xA1FE0D0)
#define UNITYENGINE_SHADER_SETGLOBALVECTORARRAY_OFFSET UNITYSDK_OFFSET(0xA1FE140)
#define UNITYENGINE_SHADER_SETGLOBALVECTORARRAY_OFFSET UNITYSDK_OFFSET(0xA1FE1A0)
#define UNITYENGINE_SHADER_SETGLOBALMATRIXARRAY_OFFSET UNITYSDK_OFFSET(0xA1FE1C0)
#define UNITYENGINE_SHADER_SETGLOBALMATRIXARRAY_OFFSET UNITYSDK_OFFSET(0xA1FE250)
#define UNITYENGINE_SHADER_SETGLOBALMATRIXARRAY_OFFSET UNITYSDK_OFFSET(0xA1FE2C0)
#define UNITYENGINE_SHADER_SETGLOBALMATRIXARRAY_OFFSET UNITYSDK_OFFSET(0xA1FE320)
#define UNITYENGINE_SHADER_GETGLOBALINT_OFFSET UNITYSDK_OFFSET(0xA1FE340)
#define UNITYENGINE_SHADER_GETGLOBALINT_OFFSET UNITYSDK_OFFSET(0xA1FE3B0)
#define UNITYENGINE_SHADER_GETGLOBALFLOAT_OFFSET UNITYSDK_OFFSET(0xA1FE3F0)
#define UNITYENGINE_SHADER_GETGLOBALFLOAT_OFFSET UNITYSDK_OFFSET(0xA1FE450)
#define UNITYENGINE_SHADER_GETGLOBALINTEGER_OFFSET UNITYSDK_OFFSET(0xA1FE490)
#define UNITYENGINE_SHADER_GETGLOBALINTEGER_OFFSET UNITYSDK_OFFSET(0xA1FE4F0)
#define UNITYENGINE_SHADER_GETGLOBALVECTOR_OFFSET UNITYSDK_OFFSET(0xA1FE530)
#define UNITYENGINE_SHADER_GETGLOBALVECTOR_OFFSET UNITYSDK_OFFSET(0xA1FE5B0)
#define UNITYENGINE_SHADER_GETGLOBALCOLOR_OFFSET UNITYSDK_OFFSET(0xA1FE610)
#define UNITYENGINE_SHADER_GETGLOBALCOLOR_OFFSET UNITYSDK_OFFSET(0xA1FE690)
#define UNITYENGINE_SHADER_GETGLOBALMATRIX_OFFSET UNITYSDK_OFFSET(0xA1FE6E0)
#define UNITYENGINE_SHADER_GETGLOBALMATRIX_OFFSET UNITYSDK_OFFSET(0xA1FE7A0)
#define UNITYENGINE_SHADER_GETGLOBALTEXTURE_OFFSET UNITYSDK_OFFSET(0xA1FE840)
#define UNITYENGINE_SHADER_GETGLOBALTEXTURE_OFFSET UNITYSDK_OFFSET(0xA1FE8A0)
#define UNITYENGINE_SHADER_GETGLOBALFLOATARRAY_OFFSET UNITYSDK_OFFSET(0xA1FE8E0)
#define UNITYENGINE_SHADER_GETGLOBALFLOATARRAY_OFFSET UNITYSDK_OFFSET(0xA1FE980)
#define UNITYENGINE_SHADER_GETGLOBALVECTORARRAY_OFFSET UNITYSDK_OFFSET(0xA1FE9F0)
#define UNITYENGINE_SHADER_GETGLOBALVECTORARRAY_OFFSET UNITYSDK_OFFSET(0xA1FEA90)
#define UNITYENGINE_SHADER_GETGLOBALMATRIXARRAY_OFFSET UNITYSDK_OFFSET(0xA1FEB00)
#define UNITYENGINE_SHADER_GETGLOBALMATRIXARRAY_OFFSET UNITYSDK_OFFSET(0xA1FEBA0)
#define UNITYENGINE_SHADER_GETGLOBALFLOATARRAY_OFFSET UNITYSDK_OFFSET(0xA1FEC10)
#define UNITYENGINE_SHADER_GETGLOBALFLOATARRAY_OFFSET UNITYSDK_OFFSET(0xA1FEC60)
#define UNITYENGINE_SHADER_GETGLOBALVECTORARRAY_OFFSET UNITYSDK_OFFSET(0xA1FEC70)
#define UNITYENGINE_SHADER_GETGLOBALVECTORARRAY_OFFSET UNITYSDK_OFFSET(0xA1FECC0)
#define UNITYENGINE_SHADER_GETGLOBALMATRIXARRAY_OFFSET UNITYSDK_OFFSET(0xA1FECD0)
#define UNITYENGINE_SHADER_GETGLOBALMATRIXARRAY_OFFSET UNITYSDK_OFFSET(0xA1FED20)
#define UNITYENGINE_SHADER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1FED30)
#define UNITYENGINE_SHADER_GETPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0xA1FED80)
#define UNITYENGINE_SHADER_GETPROPERTYNAMEID_OFFSET UNITYSDK_OFFSET(0xA1FEDC0)
#define UNITYENGINE_SHADER_GETPROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0xA1FEE00)
#define UNITYENGINE_SHADER_GETPROPERTYDESCRIPTION_OFFSET UNITYSDK_OFFSET(0xA1FEE40)
#define UNITYENGINE_SHADER_GETPROPERTYFLAGS_OFFSET UNITYSDK_OFFSET(0xA1FEE80)
#define UNITYENGINE_SHADER_GETPROPERTYATTRIBUTES_OFFSET UNITYSDK_OFFSET(0xA1FEEC0)
#define UNITYENGINE_SHADER_GETPROPERTYDEFAULTINTVALUE_OFFSET UNITYSDK_OFFSET(0xA1FEF00)
#define UNITYENGINE_SHADER_GETPROPERTYDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0xA1FEF40)
#define UNITYENGINE_SHADER_GETPROPERTYTEXTUREDIMENSION_OFFSET UNITYSDK_OFFSET(0xA1FEFF0)
#define UNITYENGINE_SHADER_GETPROPERTYTEXTUREDEFAULTNAME_OFFSET UNITYSDK_OFFSET(0xA1FF030)
#define UNITYENGINE_SHADER_FINDTEXTURESTACKIMPL_OFFSET UNITYSDK_OFFSET(0xA1FF070)
#define UNITYENGINE_SHADER_CHECKPROPERTYINDEX_OFFSET UNITYSDK_OFFSET(0xA1FF0C0)
#define UNITYENGINE_SHADER_GETPROPERTYCOUNT_OFFSET UNITYSDK_OFFSET(0xA1FF160)
#define UNITYENGINE_SHADER_FINDPROPERTYINDEX_OFFSET UNITYSDK_OFFSET(0xA1FF1A0)
#define UNITYENGINE_SHADER_GETPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0xA1FF1E0)
#define UNITYENGINE_SHADER_GETPROPERTYNAMEID_OFFSET UNITYSDK_OFFSET(0xA1FF220)
#define UNITYENGINE_SHADER_GETPROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0xA1FF260)
#define UNITYENGINE_SHADER_GETPROPERTYDESCRIPTION_OFFSET UNITYSDK_OFFSET(0xA1FF2A0)
#define UNITYENGINE_SHADER_GETPROPERTYFLAGS_OFFSET UNITYSDK_OFFSET(0xA1FF2E0)
#define UNITYENGINE_SHADER_GETPROPERTYATTRIBUTES_OFFSET UNITYSDK_OFFSET(0xA1FF320)
#define UNITYENGINE_SHADER_GETPROPERTYDEFAULTFLOATVALUE_OFFSET UNITYSDK_OFFSET(0xA1FF360)
#define UNITYENGINE_SHADER_GETPROPERTYDEFAULTVECTORVALUE_OFFSET UNITYSDK_OFFSET(0xA1FF450)
#define UNITYENGINE_SHADER_GETPROPERTYRANGELIMITS_OFFSET UNITYSDK_OFFSET(0xA1FF550)
#define UNITYENGINE_SHADER_GETPROPERTYTEXTUREDIMENSION_OFFSET UNITYSDK_OFFSET(0xA1FF630)
#define UNITYENGINE_SHADER_GETPROPERTYTEXTUREDEFAULTNAME_OFFSET UNITYSDK_OFFSET(0xA1FF700)
#define UNITYENGINE_SHADER_FINDTEXTURESTACK_OFFSET UNITYSDK_OFFSET(0xA1FF7D0)
#define UNITYENGINE_SHADER_GET_KEYWORDSPACE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1FBAE0)
#define UNITYENGINE_SHADER_ENABLEKEYWORDFAST_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1FBC20)
#define UNITYENGINE_SHADER_DISABLEKEYWORDFAST_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1FBCA0)
#define UNITYENGINE_SHADER_SETKEYWORDFAST_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1FBD20)
#define UNITYENGINE_SHADER_ISKEYWORDENABLEDFAST_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1FBDA0)
#define UNITYENGINE_SHADER_SETGLOBALVECTORIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1FC680)
#define UNITYENGINE_SHADER_SETGLOBALMATRIXIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1FC700)
#define UNITYENGINE_SHADER_GETGLOBALVECTORIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1FC9C0)
#define UNITYENGINE_SHADER_GETGLOBALMATRIXIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1FCA80)
#define UNITYENGINE_SHADER_GETPROPERTYDEFAULTVALUE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1FEFA0)

namespace UnityEngine
{
	inline static constexpr unsigned int Shader_TypeDefinitionIndex = 31013;

	class Shader : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::ShaderHardwareTier* get_globalShaderHardwareTier()
		{
			return (return (::UnityEngine::Rendering::ShaderHardwareTier*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GET_GLOBALSHADERHARDWARETIER_OFFSET))(nullptr);
		}

		::System::Void set_globalShaderHardwareTier(::UnityEngine::Rendering::ShaderHardwareTier* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ShaderHardwareTier*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SET_GLOBALSHADERHARDWARETIER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Shader* Find(::System::String* str)
		{
			return (return (::UnityEngine::Shader*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_FIND_OFFSET))(str, nullptr);
		}

		::UnityEngine::Shader* FindBuiltin(::System::String* str)
		{
			return (return (::UnityEngine::Shader*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_FINDBUILTIN_OFFSET))(str, nullptr);
		}

		::System::Int32 get_maximumChunksOverride()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GET_MAXIMUMCHUNKSOVERRIDE_OFFSET))(nullptr);
		}

		::System::Void set_maximumChunksOverride(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SET_MAXIMUMCHUNKSOVERRIDE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_maximumLOD()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GET_MAXIMUMLOD_OFFSET))(nullptr);
		}

		::System::Void set_maximumLOD(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SET_MAXIMUMLOD_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_globalMaximumLOD()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GET_GLOBALMAXIMUMLOD_OFFSET))(nullptr);
		}

		::System::Void set_globalMaximumLOD(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SET_GLOBALMAXIMUMLOD_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isSupported()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GET_ISSUPPORTED_OFFSET))(nullptr);
		}

		::System::String* get_globalRenderPipeline()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GET_GLOBALRENDERPIPELINE_OFFSET))(nullptr);
		}

		::System::Void set_globalRenderPipeline(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SET_GLOBALRENDERPIPELINE_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_enabledGlobalKeywords()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GET_ENABLEDGLOBALKEYWORDS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_globalKeywords()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GET_GLOBALKEYWORDS_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::LocalKeywordSpace* get_keywordSpace()
		{
			return (return (::UnityEngine::Rendering::LocalKeywordSpace*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GET_KEYWORDSPACE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetEnabledGlobalKeywords()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETENABLEDGLOBALKEYWORDS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetAllGlobalKeywords()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETALLGLOBALKEYWORDS_OFFSET))(nullptr);
		}

		::System::Void EnableKeyword(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_ENABLEKEYWORD_OFFSET))(str, nullptr);
		}

		::System::Void DisableKeyword(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_DISABLEKEYWORD_OFFSET))(str, nullptr);
		}

		::System::Boolean IsKeywordEnabled(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_ISKEYWORDENABLED_OFFSET))(str, nullptr);
		}

		::System::Void EnableKeywordFast(::UnityEngine::Rendering::GlobalKeyword* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::GlobalKeyword*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_ENABLEKEYWORDFAST_OFFSET))(arg, nullptr);
		}

		::System::Void DisableKeywordFast(::UnityEngine::Rendering::GlobalKeyword* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::GlobalKeyword*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_DISABLEKEYWORDFAST_OFFSET))(arg, nullptr);
		}

		::System::Void SetKeywordFast(::UnityEngine::Rendering::GlobalKeyword* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::GlobalKeyword*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETKEYWORDFAST_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsKeywordEnabledFast(::UnityEngine::Rendering::GlobalKeyword* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::GlobalKeyword*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_ISKEYWORDENABLEDFAST_OFFSET))(arg, nullptr);
		}

		::System::Void EnableKeyword(::UnityEngine::Rendering::GlobalKeyword&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::GlobalKeyword&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_ENABLEKEYWORD_OFFSET))(arg, nullptr);
		}

		::System::Void DisableKeyword(::UnityEngine::Rendering::GlobalKeyword&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::GlobalKeyword&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_DISABLEKEYWORD_OFFSET))(arg, nullptr);
		}

		::System::Void SetKeyword(::UnityEngine::Rendering::GlobalKeyword&* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::GlobalKeyword&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETKEYWORD_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsKeywordEnabled(::UnityEngine::Rendering::GlobalKeyword&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::GlobalKeyword&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_ISKEYWORDENABLED_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_renderQueue()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GET_RENDERQUEUE_OFFSET))(nullptr);
		}

		::UnityEngine::DisableBatchingType* get_disableBatching()
		{
			return (return (::UnityEngine::DisableBatchingType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GET_DISABLEBATCHING_OFFSET))(nullptr);
		}

		::System::Void WarmupAllShaders()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_WARMUPALLSHADERS_OFFSET))(nullptr);
		}

		::System::Int32 TagToID(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_TAGTOID_OFFSET))(str, nullptr);
		}

		::System::String* IDToTag(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_IDTOTAG_OFFSET))(arg, nullptr);
		}

		::System::Int32 PropertyToID(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_PROPERTYTOID_OFFSET))(str, nullptr);
		}

		::UnityEngine::Shader* GetDependency(::System::String* str)
		{
			return (return (::UnityEngine::Shader*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETDEPENDENCY_OFFSET))(str, nullptr);
		}

		::System::Int32 get_passCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GET_PASSCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_subshaderCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GET_SUBSHADERCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 GetPassCountInSubshader(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPASSCOUNTINSUBSHADER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::ShaderTagId* FindPassTagValue(::System::Int32 arg, ::UnityEngine::Rendering::ShaderTagId* arg)
		{
			return (return (::UnityEngine::Rendering::ShaderTagId*(*)(::System::Int32, ::UnityEngine::Rendering::ShaderTagId*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_FINDPASSTAGVALUE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Rendering::ShaderTagId* FindPassTagValue(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Rendering::ShaderTagId* arg)
		{
			return (return (::UnityEngine::Rendering::ShaderTagId*(*)(::System::Int32, ::System::Int32, ::UnityEngine::Rendering::ShaderTagId*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_FINDPASSTAGVALUE_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Rendering::ShaderTagId* FindSubshaderTagValue(::System::Int32 arg, ::UnityEngine::Rendering::ShaderTagId* arg)
		{
			return (return (::UnityEngine::Rendering::ShaderTagId*(*)(::System::Int32, ::UnityEngine::Rendering::ShaderTagId*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_FINDSUBSHADERTAGVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Internal_FindPassTagValue(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_INTERNAL_FINDPASSTAGVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Internal_FindPassTagValueInSubShader(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_INTERNAL_FINDPASSTAGVALUEINSUBSHADER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 Internal_FindSubshaderTagValue(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_INTERNAL_FINDSUBSHADERTAGVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetGlobalIntImpl(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALINTIMPL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetGlobalFloatImpl(::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALFLOATIMPL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetGlobalVectorImpl(::System::Int32 arg, ::UnityEngine::Vector4* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Vector4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALVECTORIMPL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetGlobalMatrixImpl(::System::Int32 arg, ::UnityEngine::Matrix4x4* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Matrix4x4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALMATRIXIMPL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetGlobalTextureImpl(::System::Int32 arg, ::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALTEXTUREIMPL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetGlobalRenderTextureImpl(::System::Int32 arg, ::UnityEngine::RenderTexture* arg, ::UnityEngine::Rendering::RenderTextureSubElement* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::RenderTexture*, ::UnityEngine::Rendering::RenderTextureSubElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALRENDERTEXTUREIMPL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetGlobalBufferImpl(::System::Int32 arg, ::UnityEngine::ComputeBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::ComputeBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALBUFFERIMPL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetGlobalGraphicsBufferImpl(::System::Int32 arg, ::UnityEngine::GraphicsBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::GraphicsBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALGRAPHICSBUFFERIMPL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetGlobalConstantBufferImpl(::System::Int32 arg, ::UnityEngine::ComputeBuffer* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALCONSTANTBUFFERIMPL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetGlobalConstantGraphicsBufferImpl(::System::Int32 arg, ::UnityEngine::GraphicsBuffer* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::GraphicsBuffer*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALCONSTANTGRAPHICSBUFFERIMPL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetGlobalIntImpl(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALINTIMPL_OFFSET))(arg, nullptr);
		}

		::System::Single GetGlobalFloatImpl(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALFLOATIMPL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector4* GetGlobalVectorImpl(::System::Int32 arg)
		{
			return (return (::UnityEngine::Vector4*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALVECTORIMPL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Matrix4x4* GetGlobalMatrixImpl(::System::Int32 arg)
		{
			return (return (::UnityEngine::Matrix4x4*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALMATRIXIMPL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Texture* GetGlobalTextureImpl(::System::Int32 arg)
		{
			return (return (::UnityEngine::Texture*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALTEXTUREIMPL_OFFSET))(arg, nullptr);
		}

		::System::Void SetGlobalFloatArrayImpl(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALFLOATARRAYIMPL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetGlobalVectorArrayImpl(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALVECTORARRAYIMPL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetGlobalMatrixArrayImpl(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALMATRIXARRAYIMPL_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetGlobalFloatArrayImpl(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALFLOATARRAYIMPL_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetGlobalVectorArrayImpl(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALVECTORARRAYIMPL_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetGlobalMatrixArrayImpl(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALMATRIXARRAYIMPL_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetGlobalFloatArrayCountImpl(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALFLOATARRAYCOUNTIMPL_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetGlobalVectorArrayCountImpl(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALVECTORARRAYCOUNTIMPL_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetGlobalMatrixArrayCountImpl(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALMATRIXARRAYCOUNTIMPL_OFFSET))(arg, nullptr);
		}

		::System::Void ExtractGlobalFloatArrayImpl(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_EXTRACTGLOBALFLOATARRAYIMPL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ExtractGlobalVectorArrayImpl(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_EXTRACTGLOBALVECTORARRAYIMPL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ExtractGlobalMatrixArrayImpl(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_EXTRACTGLOBALMATRIXARRAYIMPL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetGlobalFloatArray(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALFLOATARRAY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetGlobalVectorArray(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALVECTORARRAY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetGlobalMatrixArray(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALMATRIXARRAY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ExtractGlobalFloatArray(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_EXTRACTGLOBALFLOATARRAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ExtractGlobalVectorArray(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_EXTRACTGLOBALVECTORARRAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ExtractGlobalMatrixArray(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_EXTRACTGLOBALMATRIXARRAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetGlobalInt(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALINT_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetGlobalInt(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALINT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetGlobalFloat(::System::String* str, ::System::Single arg)
		{
			((::System::Void(*)(::System::String*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALFLOAT_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetGlobalFloat(::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALFLOAT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetGlobalInteger(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALINTEGER_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetGlobalInteger(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALINTEGER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetGlobalVector(::System::String* str, ::UnityEngine::Vector4* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::Vector4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALVECTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetGlobalVector(::System::Int32 arg, ::UnityEngine::Vector4* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Vector4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetGlobalColor(::System::String* str, ::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALCOLOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetGlobalColor(::System::Int32 arg, ::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALCOLOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetGlobalMatrix(::System::String* str, ::UnityEngine::Matrix4x4* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::Matrix4x4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALMATRIX_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetGlobalMatrix(::System::Int32 arg, ::UnityEngine::Matrix4x4* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Matrix4x4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALMATRIX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetGlobalTexture(::System::String* str, ::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALTEXTURE_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetGlobalTexture(::System::Int32 arg, ::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALTEXTURE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetGlobalTexture(::System::String* str, ::UnityEngine::RenderTexture* arg, ::UnityEngine::Rendering::RenderTextureSubElement* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::RenderTexture*, ::UnityEngine::Rendering::RenderTextureSubElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALTEXTURE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void SetGlobalTexture(::System::Int32 arg, ::UnityEngine::RenderTexture* arg, ::UnityEngine::Rendering::RenderTextureSubElement* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::RenderTexture*, ::UnityEngine::Rendering::RenderTextureSubElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALTEXTURE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetGlobalBuffer(::System::String* str, ::UnityEngine::ComputeBuffer* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::ComputeBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALBUFFER_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetGlobalBuffer(::System::Int32 arg, ::UnityEngine::ComputeBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::ComputeBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetGlobalBuffer(::System::String* str, ::UnityEngine::GraphicsBuffer* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::GraphicsBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALBUFFER_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetGlobalBuffer(::System::Int32 arg, ::UnityEngine::GraphicsBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::GraphicsBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetGlobalConstantBuffer(::System::String* str, ::UnityEngine::ComputeBuffer* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALCONSTANTBUFFER_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void SetGlobalConstantBuffer(::System::Int32 arg, ::UnityEngine::ComputeBuffer* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALCONSTANTBUFFER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetGlobalConstantBuffer(::System::String* str, ::UnityEngine::GraphicsBuffer* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::GraphicsBuffer*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALCONSTANTBUFFER_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void SetGlobalConstantBuffer(::System::Int32 arg, ::UnityEngine::GraphicsBuffer* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::GraphicsBuffer*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALCONSTANTBUFFER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetGlobalFloatArray(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALFLOATARRAY_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetGlobalFloatArray(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALFLOATARRAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetGlobalFloatArray(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALFLOATARRAY_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetGlobalFloatArray(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALFLOATARRAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetGlobalVectorArray(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALVECTORARRAY_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetGlobalVectorArray(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALVECTORARRAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetGlobalVectorArray(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALVECTORARRAY_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetGlobalVectorArray(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALVECTORARRAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetGlobalMatrixArray(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALMATRIXARRAY_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetGlobalMatrixArray(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALMATRIXARRAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetGlobalMatrixArray(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALMATRIXARRAY_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetGlobalMatrixArray(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALMATRIXARRAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetGlobalInt(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALINT_OFFSET))(str, nullptr);
		}

		::System::Int32 GetGlobalInt(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALINT_OFFSET))(arg, nullptr);
		}

		::System::Single GetGlobalFloat(::System::String* str)
		{
			return (return (::System::Single(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALFLOAT_OFFSET))(str, nullptr);
		}

		::System::Single GetGlobalFloat(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALFLOAT_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetGlobalInteger(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALINTEGER_OFFSET))(str, nullptr);
		}

		::System::Int32 GetGlobalInteger(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALINTEGER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector4* GetGlobalVector(::System::String* str)
		{
			return (return (::UnityEngine::Vector4*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALVECTOR_OFFSET))(str, nullptr);
		}

		::UnityEngine::Vector4* GetGlobalVector(::System::Int32 arg)
		{
			return (return (::UnityEngine::Vector4*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALVECTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* GetGlobalColor(::System::String* str)
		{
			return (return (::UnityEngine::Color*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALCOLOR_OFFSET))(str, nullptr);
		}

		::UnityEngine::Color* GetGlobalColor(::System::Int32 arg)
		{
			return (return (::UnityEngine::Color*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALCOLOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Matrix4x4* GetGlobalMatrix(::System::String* str)
		{
			return (return (::UnityEngine::Matrix4x4*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALMATRIX_OFFSET))(str, nullptr);
		}

		::UnityEngine::Matrix4x4* GetGlobalMatrix(::System::Int32 arg)
		{
			return (return (::UnityEngine::Matrix4x4*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALMATRIX_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Texture* GetGlobalTexture(::System::String* str)
		{
			return (return (::UnityEngine::Texture*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALTEXTURE_OFFSET))(str, nullptr);
		}

		::UnityEngine::Texture* GetGlobalTexture(::System::Int32 arg)
		{
			return (return (::UnityEngine::Texture*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALTEXTURE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetGlobalFloatArray(::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALFLOATARRAY_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetGlobalFloatArray(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALFLOATARRAY_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetGlobalVectorArray(::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALVECTORARRAY_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetGlobalVectorArray(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALVECTORARRAY_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetGlobalMatrixArray(::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALMATRIXARRAY_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetGlobalMatrixArray(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALMATRIXARRAY_OFFSET))(arg, nullptr);
		}

		::System::Void GetGlobalFloatArray(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALFLOATARRAY_OFFSET))(str, arg, nullptr);
		}

		::System::Void GetGlobalFloatArray(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALFLOATARRAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetGlobalVectorArray(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALVECTORARRAY_OFFSET))(str, arg, nullptr);
		}

		::System::Void GetGlobalVectorArray(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALVECTORARRAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetGlobalMatrixArray(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALMATRIXARRAY_OFFSET))(str, arg, nullptr);
		}

		::System::Void GetGlobalMatrixArray(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALMATRIXARRAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_.CTOR_OFFSET))(nullptr);
		}

		::System::String* GetPropertyName(::UnityEngine::Shader* arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::UnityEngine::Shader*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetPropertyNameId(::UnityEngine::Shader* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Shader*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYNAMEID_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Rendering::ShaderPropertyType* GetPropertyType(::UnityEngine::Shader* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Rendering::ShaderPropertyType*(*)(::UnityEngine::Shader*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::String* GetPropertyDescription(::UnityEngine::Shader* arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::UnityEngine::Shader*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYDESCRIPTION_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Rendering::ShaderPropertyFlags* GetPropertyFlags(::UnityEngine::Shader* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Rendering::ShaderPropertyFlags*(*)(::UnityEngine::Shader*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYFLAGS_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetPropertyAttributes(::UnityEngine::Shader* arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::Shader*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYATTRIBUTES_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetPropertyDefaultIntValue(::UnityEngine::Shader* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Shader*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYDEFAULTINTVALUE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector4* GetPropertyDefaultValue(::UnityEngine::Shader* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Vector4*(*)(::UnityEngine::Shader*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYDEFAULTVALUE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Rendering::TextureDimension* GetPropertyTextureDimension(::UnityEngine::Shader* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Rendering::TextureDimension*(*)(::UnityEngine::Shader*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYTEXTUREDIMENSION_OFFSET))(arg, arg, nullptr);
		}

		::System::String* GetPropertyTextureDefaultName(::UnityEngine::Shader* arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::UnityEngine::Shader*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYTEXTUREDEFAULTNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean FindTextureStackImpl(::UnityEngine::Shader* arg, ::System::Int32 arg, ::System::String&* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Shader*, ::System::Int32, ::System::String&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_FINDTEXTURESTACKIMPL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void CheckPropertyIndex(::UnityEngine::Shader* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Shader*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_CHECKPROPERTYINDEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetPropertyCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 FindPropertyIndex(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_FINDPROPERTYINDEX_OFFSET))(str, nullptr);
		}

		::System::String* GetPropertyName(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYNAME_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetPropertyNameId(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYNAMEID_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::ShaderPropertyType* GetPropertyType(::System::Int32 arg)
		{
			return (return (::UnityEngine::Rendering::ShaderPropertyType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYTYPE_OFFSET))(arg, nullptr);
		}

		::System::String* GetPropertyDescription(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYDESCRIPTION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::ShaderPropertyFlags* GetPropertyFlags(::System::Int32 arg)
		{
			return (return (::UnityEngine::Rendering::ShaderPropertyFlags*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYFLAGS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetPropertyAttributes(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYATTRIBUTES_OFFSET))(arg, nullptr);
		}

		::System::Single GetPropertyDefaultFloatValue(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYDEFAULTFLOATVALUE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector4* GetPropertyDefaultVectorValue(::System::Int32 arg)
		{
			return (return (::UnityEngine::Vector4*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYDEFAULTVECTORVALUE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* GetPropertyRangeLimits(::System::Int32 arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYRANGELIMITS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::TextureDimension* GetPropertyTextureDimension(::System::Int32 arg)
		{
			return (return (::UnityEngine::Rendering::TextureDimension*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYTEXTUREDIMENSION_OFFSET))(arg, nullptr);
		}

		::System::String* GetPropertyTextureDefaultName(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYTEXTUREDEFAULTNAME_OFFSET))(arg, nullptr);
		}

		::System::Boolean FindTextureStack(::System::Int32 arg, ::System::String&* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::String&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_FINDTEXTURESTACK_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void get_keywordSpace_Injected(::UnityEngine::Rendering::LocalKeywordSpace&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::LocalKeywordSpace&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GET_KEYWORDSPACE_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void EnableKeywordFast_Injected(::UnityEngine::Rendering::GlobalKeyword&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::GlobalKeyword&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_ENABLEKEYWORDFAST_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void DisableKeywordFast_Injected(::UnityEngine::Rendering::GlobalKeyword&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::GlobalKeyword&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_DISABLEKEYWORDFAST_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void SetKeywordFast_Injected(::UnityEngine::Rendering::GlobalKeyword&* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::GlobalKeyword&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETKEYWORDFAST_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsKeywordEnabledFast_Injected(::UnityEngine::Rendering::GlobalKeyword&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::GlobalKeyword&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_ISKEYWORDENABLEDFAST_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void SetGlobalVectorImpl_Injected(::System::Int32 arg, ::UnityEngine::Vector4&* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Vector4&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALVECTORIMPL_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetGlobalMatrixImpl_Injected(::System::Int32 arg, ::UnityEngine::Matrix4x4&* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Matrix4x4&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALMATRIXIMPL_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetGlobalVectorImpl_Injected(::System::Int32 arg, ::UnityEngine::Vector4&* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Vector4&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALVECTORIMPL_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetGlobalMatrixImpl_Injected(::System::Int32 arg, ::UnityEngine::Matrix4x4&* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Matrix4x4&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALMATRIXIMPL_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetPropertyDefaultValue_Injected(::UnityEngine::Shader* arg, ::System::Int32 arg, ::UnityEngine::Vector4&* arg)
		{
			((::System::Void(*)(::UnityEngine::Shader*, ::System::Int32, ::UnityEngine::Vector4&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYDEFAULTVALUE_INJECTED_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

